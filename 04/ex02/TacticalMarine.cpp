/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:38:10 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 16:39:43 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	if ( this != &rhs )
		this->operator=(rhs);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine* copy = new TacticalMarine(*this);

	return (copy);
}
void	TacticalMarine::battleCry() const
{
	std::cout << "* For the holy PLOT! *" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */