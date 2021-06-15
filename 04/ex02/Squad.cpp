/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:37:40 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 17:56:43 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
	:	count(0), units(NULL)
{
}

Squad::Squad( const Squad & src )
	:	count(0), units(NULL)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		{
			ISpaceMarine* &marine = this->units[i];

			delete marine;
			marine = NULL;
		}
		delete [] this->units;
		this->units = NULL;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	int	i;
	if ( this != &rhs )
	{
		for (i = 0; i < rhs.getCount(); i++)
		{
			if (i >= this->count)
				break ;

			ISpaceMarine* &marine = this->units[i];

			delete marine;
			marine = rhs.units[i]->clone();
		}
		for (; i < rhs.getCount(); i++)
			this->push(rhs.units[i]->clone());
		for (; i < this->count; i++)
		{
			ISpaceMarine* &marine = this->units[i];

			delete marine;
			marine = NULL;
		}
		this->count = rhs.getCount();
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
// 유닛 하나를 추가해야함
// count를 리턴 매개변수가 null 이거나
// 동일한 이름을 가진 유닛이면 추가불가
int				Squad::push(ISpaceMarine* _marine)
{
	if (!_marine)
		return (this->count);
	
	int i;

	for (i = 0; i < this->count; i++)
	{
		if (this->units[i] == _marine)
			return (this->count);
	}
	ISpaceMarine** newUnits = new ISpaceMarine*[this->count + 1];
	
	
	for (i = 0; i < this->count; i++)
		newUnits[i] = this->units[i];
	
	newUnits[i] = _marine;

	delete [] this->units;
	this->units = newUnits;

	this->count++;
	return (this->count);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
int				Squad::getCount(void) const
{ return (this->count); }

ISpaceMarine*	Squad::getUnit(int _num) const
{
	if (_num < 0 || _num >= this->count)
		return (NULL);
	return (this->units[_num]);
}

/* ************************************************************************** */