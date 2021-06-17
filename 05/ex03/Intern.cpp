/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 02:11:39 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 13:07:27 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Intern const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


Form*	Intern::createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

//	typedef 하는 법
// typedef Form*(std::string const &target) 	FuncType;
// Form*(std::string const &target)	-> FuncType의 타입
// Form*(std::string const &target)*	-> FuncType의 포인터 타입

// MEMBER FUNCTION
Form*	Intern::makeForm(std::string const & name, std::string const & target)
{
	typedef Form* (*FuncType)(std::string const &target);
	typedef struct
	{
		std::string _name;
		FuncType	func;
	} FormType;
	
	FormType formtype[] = {
		{"ShrubberyCreation", &createShrubberyCreationForm},\
		{"RobotomyRequest", &createRobotomyRequestForm}, \
		{"PresidentialPardon", &createPresidentialPardonForm}
	};

	for (int i = 0; i < 3; i++)
	{
		if (formtype[i]._name == name)
		{
			std::cout << "Intern creates " << formtype[i]._name << std::endl;
			return (formtype[i].func(target));
		}
	}
	throw Intern::NotFoundFormException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char *Intern::NotFoundFormException::what(void) const throw()
{
	return ("Intern Exception : Not Found Form Name!");
}

/* ************************************************************************** */