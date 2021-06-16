/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:09:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 01:05:08 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string const & _target)
	:	Form("PresidentialPardon", 25, 5, _target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
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

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
		this->Form::operator=(rhs);
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */