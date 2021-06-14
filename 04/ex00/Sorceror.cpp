/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorceror.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:10:44 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 20:23:09 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorceror.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorceror::Sorceror(std::string _name, std::string _title)
	:	name(_name), title(_title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorceror::Sorceror( const Sorceror & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorceror::~Sorceror()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorceror &				Sorceror::operator=( Sorceror const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Sorceror const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Sorceror::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Sorceror::getName(void) const
{ return (this->name); }
const std::string	&Sorceror::getTitle(void) const
{ return (this->title); }

// SETTER
void	Sorceror::setName(const std::string &_name)
{ this->name = _name; }

void	Sorceror::setTitle(const std::string &_title)
{ this->title = _title; }

/* ************************************************************************** */