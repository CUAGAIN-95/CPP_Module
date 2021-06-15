/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:29:21 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 21:16:06 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	this->zeroInventory();
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	this->zeroInventory();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
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

void	MateriaSource::zeroInventory(void)
{
	for (int i = 0; i < 4; ++i)
		this->inventory[i] = NULL;
}

void		MateriaSource::learnMateria(AMateria* _am)
{
	int		i;

	for (i = 0; i < 4; i++)
		if (this->inventory[i] && this->inventory[i]->getType() == _am->getType())
			return ;

	for (i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = _am;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */