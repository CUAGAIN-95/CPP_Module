/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:18:13 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:40:47 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & _name)
	:	name(_name), ap(40), aweapon(NULL)
{
}

Character::Character(std::string const & _name, int _ap)
	:	name(_name), ap(_ap), aweapon(NULL)
{
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->ap = rhs.getAP();
		this->aweapon = rhs.getAWeapon();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << i.getName() << " has " << i.getAP() << " AP and ";
	if (i.getAWeapon())
		o << "wields a " << i.getAWeapon()->getName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Character::recoverAP(void)
{
	if (this->ap == 40)
		return ;
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::equip(AWeapon* _aweapon)
{
	this->aweapon = _aweapon;
}

void	Character::attack(Enemy* _enemy)
{
	if (this->aweapon == NULL || _enemy == NULL)
		return ;
	if (this->ap < this->aweapon->getAPcost())
	{
		std::cout << "Not enough energy!" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks " << _enemy->getType() << " with a " << this->aweapon->getName() << std::endl;
	this->aweapon->attack();
	_enemy->takeDamage(this->aweapon->getDamage());
	if (_enemy->getHP() == 0)
		delete _enemy;
	if ((this->ap -= this->aweapon->getAPcost()) < 0)
		this->ap = 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&Character::getName(void) const
{ return (this->name); }

int			Character::getAP(void) const
{ return (this->ap); }

AWeapon*	Character::getAWeapon(void) const
{ return (this->aweapon); }

/* ************************************************************************** */