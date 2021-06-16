/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:23:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/16 19:35:05 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &_name, const int _sign, const int _execute)
	:	name(_name), isSigned(false), gradeRequiredSign(_sign), gradeRequiredExecute(_execute)
{
	if (gradeRequiredSign < 1 || gradeRequiredExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeRequiredSign > 150 || gradeRequiredExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
	:	name(src.name), gradeRequiredSign(src.gradeRequiredSign), gradeRequiredExecute(src.gradeRequiredExecute)
{
	if (gradeRequiredSign < 1 || gradeRequiredExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeRequiredSign > 150 || gradeRequiredExecute > 150)
		throw Form::GradeTooLowException();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		this->isSigned = rhs.getIsSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "| name >> " << i.getName() << " | isSigned >> " << (i.getIsSigned() ? "true" : "false") \
		<< " | gradeRequiredSign >> " << i.getGradeRequiredSign() \
		<< " | gradeRequiredExecute >> " << i.getGradeRequiredExecute();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->gradeRequiredSign)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Form::getName(void) const
{ return (this->name); }

bool	Form::getIsSigned(void) const
{ return (this->isSigned); }

int		Form::getGradeRequiredSign(void) const
{ return (this->gradeRequiredSign); }

int		Form::getGradeRequiredExecute(void) const
{ return (this->gradeRequiredExecute); }

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form Exception : grade too high exception!");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form Exception : grade too low exception!");
}

/* ************************************************************************** */