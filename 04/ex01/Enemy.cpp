/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:56:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 22:06:57 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int _hp, std::string const & _type)
	:	hp(_hp), type(_type)
{
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->hp = rhs.getHP();
		this->type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Enemy const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Enemy::takeDamage(int _damage)
{
	if (_damage < 0)
		return ;
	this->hp -= _damage;
	if (hp < 0)
		this->hp = 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
std::string const	&Enemy::getType(void) const
{ return (this->type); }
int		Enemy::getHP(void) const
{ return (this->hp); }

/* ************************************************************************** */