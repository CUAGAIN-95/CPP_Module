/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:55:36 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 11:56:11 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &_target)
	:	Form("RobotomyRequest", 72, 45, _target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	:	Form(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src.getTarget())
{
	this->setIsSigned(src.getIsSigned());
	if (this->getSignGrade() < 1 || this->getExecuteGrade() < 1)
		throw Form::GradeTooHighException();
	else if (getSignGrade() > 150 || getExecuteGrade() > 150)
		throw Form::GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		this->Form::operator=(rhs);
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << "Drrrrrr......" << std::endl;
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else 
		std::cout << getTarget() << " failed to be robotomize." << std::endl;
}

Form*	CreateRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */