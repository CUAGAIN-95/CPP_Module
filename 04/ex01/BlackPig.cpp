/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BlackPig.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:50:26 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:56:35 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BlackPig.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BlackPig::BlackPig()
	:	Enemy(40, "Black Pig")
{
	std::cout << "Oink! Oink!" << std::endl;
}

BlackPig::BlackPig( const BlackPig & src )
	:	Enemy(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BlackPig::~BlackPig()
{
	std::cout << "* PIG DIED :( *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BlackPig &				BlackPig::operator=( BlackPig const & rhs )
{
	if ( this != &rhs )
		this->Enemy::operator=(rhs);
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, BlackPig const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	BlackPig::takeDamage(int _damage)
{
	if (_damage < 0)
		return ;
	this->hp -= (_damage + 5);
	std::cout << "Pig ouch!" << std::endl;
	if (hp < 0)
		this->hp = 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */