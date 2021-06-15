/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:30:29 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 19:22:41 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type)
	:	_type(type), _xp(0)
{
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		this->_xp = rhs.getXP();
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION

void AMateria::use(ICharacter& target)
{
	(void)target;	// error 처리
	this->_xp += 10;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
std::string const	&AMateria::getType() const
{ return (this->_type); }

unsigned int		AMateria::getXP() const
{ return (this->_xp); }
/* ************************************************************************** */