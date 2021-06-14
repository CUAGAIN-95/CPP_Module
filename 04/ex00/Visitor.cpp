/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visitor.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:58:16 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 21:05:34 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Visitor.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Visitor::Visitor(std::string _name)
	:	Victim(_name)
{
	std::cout << "Nice to meet you!" << std::endl;
}

Visitor::Visitor( const Visitor & src )
	:	Victim(src)
{}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Visitor::~Visitor()
{
	std::cout << "I'm sad :(" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Visitor &				Visitor::operator=( Visitor const & rhs )
{
	if ( this != &rhs )
		this->Victim::operator=(rhs);
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Visitor const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Visitor::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a white rabbit!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */