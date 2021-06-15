/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:29:12 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 21:07:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
	:	name("")
{
	this->zeroInventory();
}

Character::Character(std::string const & _name)
	:	name(_name)
{
	this->zeroInventory();
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
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		for (int i = 0; i < 4; i++)
			if (this->inventory[i])
				delete this->inventory[i];
		for (int i = 0; i < 4; i++)
			if (rhs.inventory[i])
				this->inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::zeroInventory(void)
{
	for (int i = 0; i < 4; ++i)
		this->inventory[i] = NULL;
}

// MEMBER FUNCTION
void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
std::string const & Character::getName() const
{ return (this->name); }
/* ************************************************************************** */