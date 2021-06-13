/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:47:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 17:52:47 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
	:	ClapTrap("Scav_yeonhlee", 100, 100, 50, 50, 1, 20, 15, 3, "SC4V-TP")

{
	std::cout << this->type << " Default constructor called -ScaveTrap" << std::endl;
}


ScavTrap::ScavTrap(std::string _name)
	:	ClapTrap(_name, 100, 100, 50, 50, 1, 20, 15, 3, "SC4V-TP")
{
	std::cout << this->type << " Name parameter constructor called -ScaveTrap" << std::endl;
}


ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << this->type << " Copy constructor called -ScaveTrap" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << this->type << " Destrutor called -ScaveTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap	&ScavTrap::operator=(const ScavTrap  &op)
{
	std::cout << this->type << " Assignation operator called -ScaveTrap" << std::endl;
	if (this != &op)
		this->ClapTrap::operator=(op);
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

/* MEMBER FUNCTION */
void	ScavTrap::challengeNewComer(void)
{
	int		rand_num = std::rand() % 4;
	std::string		challenge_list[] = {" I'm sad   :(", " I'm happy :)", "I'm angry  :|", "I'm good   XD"};

	std::cout << "SCAV-TP " << this->name << challenge_list[rand_num] << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */