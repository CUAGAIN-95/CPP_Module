/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:04:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 19:13:24 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
	:	ClapTrap("yeonhleeNinja", 60, 60 ,120, 120, 1, 60, 5, 0, "NINJA-TP")
{
	std::cout << this->type << " Default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string _name)
:	ClapTrap(_name, 60, 60 ,120, 120, 1, 60, 5, 0, "NINJA-TP")
{
	std::cout << this->type << " Name parameter constructor called" << std::endl;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
	std::cout << this->type <<  " Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << this->type << " Destrutor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &op)
{
	std::cout << this->type << " Assignation operator called" << std::endl;
	if (this != &op)
		this->ClapTrap::operator=(op);
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */