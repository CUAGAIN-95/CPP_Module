/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:23:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 01:05:24 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &_name, const int _sign, const int _execute, \
		std::string const & _target)
	:	name(_name), isSigned(false), signGrade(_sign), executeGrade(_execute), \
		target(_target)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
	:	name(src.name), signGrade(src.signGrade), executeGrade(src.executeGrade), \
		target(src.target)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
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
		<< " | signGrade >> " << i.getSignGrade() \
		<< " | executeGrade >> " << i.getExecuteGrade()
		<< " | target >> " << i.getTarget();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned)
		throw Form::NotIsSignedException();
	if (executor.getGrade() > this->executeGrade)
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Form::getName(void) const
{ return (this->name); }

bool	Form::getIsSigned(void) const
{ return (this->isSigned); }

int		Form::getSignGrade(void) const
{ return (this->signGrade); }

int		Form::getExecuteGrade(void) const
{ return (this->executeGrade); }

const std::string	&Form::getTarget(void) const
{ return (this->target); }

// SETTER
void	Form::setIsSigned(bool _bool)
{ this->isSigned = _bool; }

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
const char *Form::NotIsSignedException::what(void) const throw()
{
	return ("Form Exception : Form is not signed!");
}
/* ************************************************************************** */