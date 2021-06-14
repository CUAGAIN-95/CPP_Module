/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:06:36 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 21:06:12 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Victim::Victim()
// {
// }

Victim::Victim(std::string _name)
	:	name(_name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters" << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Victim::getName(void) const
{ return (this->name); }

// SETTER
void	Victim::setName(const std::string &_name)
{ this->name = _name; }


/* ************************************************************************** */