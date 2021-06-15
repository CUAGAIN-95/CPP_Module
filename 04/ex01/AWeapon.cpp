/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:41:16 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 21:58:51 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon(std::string const & _name, int _apcost, int _damage)
	:	name(_name), apcost(_apcost), damage(_damage)
{
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->apcost = rhs.getAPcost();
		this->damage = rhs.getDamage();
	}
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	AWeapon::attack(void) const
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
std::string const	&AWeapon::getName(void) const
{ return (this->name); }

int		AWeapon::getAPcost(void) const
{ return (this->apcost); }

int		AWeapon::getDamage(void) const
{ return (this->damage); }

/* ************************************************************************** */