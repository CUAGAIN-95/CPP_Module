/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperSoldier.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:07:41 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 18:17:12 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperSoldier.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperSoldier::SuperSoldier()
{
	std::cout << "Brrrraaaaaaa!!!!" << std::endl;
}

SuperSoldier::SuperSoldier( const SuperSoldier & src )
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperSoldier::~SuperSoldier()
{
	std::cout << "Bye bye!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperSoldier &				SuperSoldier::operator=( SuperSoldier const & rhs )
{
	if ( this != &rhs )
		this->operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
ISpaceMarine*	SuperSoldier::clone() const
{
	return (new SuperSoldier(*this));
}

void	SuperSoldier::battleCry() const
{
	std::cout << "HELP ME" << std::endl;
}
void	SuperSoldier::rangedAttack() const
{
	std::cout << "* Bang! Bang! *" << std::endl;
}

void	SuperSoldier::meleeAttack() const
{
	std::cout << "* Punch! Punch! *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */