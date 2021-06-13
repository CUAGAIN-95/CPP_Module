/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:22:23 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:50:52 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap()
	:	ClapTrap("yeonhleeSuper", 100, 100, 120, 120, 1, 60, 30, 5, "SUPER-TP"), FragTrap("yeonhleeSuper"), NinjaTrap("yeonhleeSuper")
{
	std::cout << this->type << " Default constructor called -SuperTrap" << std::endl;
}

SuperTrap::SuperTrap(std::string _name)
	:	ClapTrap(_name, 100, 100, 120, 120, 1, 60, 30, 5, "SUPER-TP"), FragTrap(_name), NinjaTrap(_name)
{
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
	this->type = "SUPER-TP";
	std::cout << this->type << " Name parameter constructor called -SuperTrap" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	std::cout << this->type << " Copy constructor called -SuperTrap" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << this->type << " Destrutor called -SuperTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap	&SuperTrap::operator=(const SuperTrap &op)
{
	std::cout << this->type << " Assignation operator called -SuperTrap" << std::endl;
	if (this != &op)
		this->ClapTrap::operator=(op);
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, SuperTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

/* MEMBER FUNCTION */
void	SuperTrap::rangedAttack(std::string const & target)
{
	this->FragTrap::rangedAttack(target);
}
void	SuperTrap::meleeAttack(std::string const & target)
{
	this->NinjaTrap::meleeAttack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */