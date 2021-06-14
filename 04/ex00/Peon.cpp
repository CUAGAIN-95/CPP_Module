/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:30:35 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 20:53:29 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string _name)
	:	Victim(_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src )
	:	Victim(src)
{}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	if ( this != &rhs )
		this->Victim::operator=(rhs);
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */