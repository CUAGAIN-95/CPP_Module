/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FireBall.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:45:15 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:49:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FireBall.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FireBall::FireBall()
	:	AWeapon("FireBall", 20, 100)
{
}

FireBall::FireBall( const FireBall & src )
	:	AWeapon(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FireBall::~FireBall()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FireBall &				FireBall::operator=( FireBall const & rhs )
{
	if ( this != &rhs )
	{
		this->AWeapon::operator=(rhs);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, FireBall const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	FireBall::attack(void) const
{
	std::cout << "* BOOOOOOOOOOOOM! *" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */