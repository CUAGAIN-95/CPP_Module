/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:12:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 01:22:23 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string const &_name, int _grade)
	:	name(_name), grade(_grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		this->grade = rhs.getGrade();
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION

//등급을 올려줌 1이 최고 지점
void	Bureaucrat::increment(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

//등급을 내려줌 150이 최저 지점
void	Bureaucrat::decrement(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " cannot sign " << form.getName() << " because " << this->name << " is already signed" << std::endl;
	else if (this->grade <= form.getSignGrade())
		std::cout << this->name << " sgins " << form.getName() << std::endl;
	else
		std::cout << this->name << " cannot sign " << form.getName() << " because " << this->name << "'s grade is too low : " << this->grade << std::endl;
	form.beSigned(*this);
}

void			Bureaucrat::executeForm(Form const &form)
{
	if (!form.getIsSigned())
		std::cout << name << " cannot execute " << form.getName() << " because form is unsigned." << std::endl;
	else if (grade > form.getSignGrade())
		std::cout << name << " cannot execute " << form.getName() << " because grade is too low." << std::endl;
	else
		std::cout << name << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Bureaucrat::getName(void) const
{ return (this->name); }

int		Bureaucrat::getGrade(void) const
{return (this->grade); }

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high!");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low!");
}

/* ************************************************************************** */