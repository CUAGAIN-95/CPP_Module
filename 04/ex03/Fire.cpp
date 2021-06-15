/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:23:16 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 21:26:58 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fire::Fire()
	:	AMateria("fire")
{
}

Fire::Fire( const Fire & src )
	:	AMateria(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fire::~Fire()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fire &				Fire::operator=( Fire const & rhs )
{
	if ( this != &rhs )
		this->AMateria::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
AMateria* Fire::clone() const
{
	return (new Fire(*this));
}

void	Fire::use(ICharacter& target)
{
	this->AMateria::use(target);
	
	std::cout << "* Pong a Fireball at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */