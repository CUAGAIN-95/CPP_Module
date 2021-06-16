/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:58:47 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 02:04:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target)
	:	Form("ShrubberyCreation", 145, 137, _target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->Form::operator=(rhs);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::ofstream	ofs((this->getName() + "_shrubbery"), std::ios::out | std::ios::trunc);
	
	if (!ofs.is_open())
	{
		ofs.close();
		throw ShrubberyCreationForm::FileOpenException();
	}

	ofs << "        _-_" << std::endl;
	ofs << "     /~~   ~~\\" << std::endl;
	ofs << "  /~~         ~~\\" << std::endl;
	ofs << " {               }" << std::endl;
	ofs << "  \\  _-     -_  /" << std::endl;
	ofs << "    ~  \\ //  ~" << std::endl;
	ofs << " _- -   | | _- _" << std::endl;
	ofs << "   _ -  | |   -_" << std::endl;
	ofs << "       // \\ " << std::endl;
	ofs << std::endl;

	ofs.close();	
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/


const char *ShrubberyCreationForm::FileOpenException::what(void) const throw()
{
	return ("ShrubberyCreationForm Exception : file open error!");
}

/* ************************************************************************** */