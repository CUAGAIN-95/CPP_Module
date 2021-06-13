/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:47:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 15:18:05 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
	:	name("yeonhlee"), \
		hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), \
		level(1), \
		meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3)
{
	std::cout << "Default constructor called -ScaveTrap" << std::endl;
}


ScavTrap::ScavTrap(std::string _name)
	:	name(_name), \
		hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), \
		level(1), \
		meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3)
{
	std::cout << "Parameter constructor called -ScaveTrap" << std::endl;
}


ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "Copy constructor called -ScaveTrap" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destrutor called -ScaveTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap	&ScavTrap::operator=(const ScavTrap  &op)
{
	std::cout << "Assignation operator called -ScaveTrap" << std::endl;
	if (this != &op)
	{
		this->name = op.getName();
		this->hitPoints = op.getHitPoints();
		this->maxHitPoints = op.getMaxHitPoints();
		this->energyPoints = op.getEnergyPoints();
		this->maxEnergyPoints = op.getMaxEnergyPoints();
		this->level = op.getLevel();
		this->meleeAttackDamage = op.getMeleeAttackDamage();
		this->rangedAttackDamage = op.getRangedAttackDamage();
		this->armorDamageReduction = op.getArmorDamageReduction();
	}
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
void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAV-TP " << this->name << " attacks " << target << " at range, causing " \
			<< this->rangedAttackDamage << " points of damage! -ScaveTrap" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAV-TP " << this->name << " attacks " << target << " at melee, causing " \
			<< this->meleeAttackDamage << " points of damage! -ScaveTrap" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int		damage;
	
	damage = (amount - this->armorDamageReduction);
	if (damage < 0)
		damage = 0;
	this->hitPoints -= damage;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "SCAV-TP " << this->name << " is taken damage " << damage \
			<< ", current hitpoints are " << this->hitPoints << "! -ScaveTrap" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "SCAV-TP " << this->name << " is died... -ScaveTrap" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "SCAV-TP " << this->name << " is repaired " << amount \
			<< ", current hitpoints are " << this->hitPoints << "! -ScaveTrap" << std::endl;
}

void	ScavTrap::challengeNewComer(void)
{
	std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* GETTER */
const std::string	&ScavTrap::getName(void) const
{ return (this->name); }

int		ScavTrap::getHitPoints(void) const
{ return (this->hitPoints); }

int		ScavTrap::getMaxHitPoints(void) const
{ return (this->maxHitPoints); }

int		ScavTrap::getEnergyPoints(void) const
{ return (this->energyPoints); }

int		ScavTrap::getMaxEnergyPoints(void) const
{ return (this->maxEnergyPoints); }

int		ScavTrap::getLevel(void) const
{ return (this->level); }

int		ScavTrap::getMeleeAttackDamage(void) const
{ return (this->meleeAttackDamage); }

int		ScavTrap::getRangedAttackDamage(void) const
{ return (this->rangedAttackDamage); }

int		ScavTrap::getArmorDamageReduction(void) const
{ return (this->armorDamageReduction); }

/* SETTER */
void	ScavTrap::setName(const std::string &_name)
{ this->name = _name; }

void	ScavTrap::setHitPoints(int _hitPoints)
{ this->hitPoints = _hitPoints; }

void	ScavTrap::setMaxHitPoints(int _maxHitPoints)
{ this->maxHitPoints = _maxHitPoints; }

void	ScavTrap::setEnergyPoints(int _energyPoints)
{ this->energyPoints = _energyPoints; }

void	ScavTrap::setMaxEnergyPoints(int _maxEnergyPoints)
{ this->maxEnergyPoints = _maxEnergyPoints; }

void	ScavTrap::setLevel(int _level)
{ this->level = _level; }

void	ScavTrap::setMeleeAttackDamage(int _meleeAttackDamage)
{ this->meleeAttackDamage = _meleeAttackDamage; }

void	ScavTrap::setRangedAttackDamage(int _rangedAttackDamage)
{ this->rangedAttackDamage = _rangedAttackDamage; }

void	ScavTrap::setArmorDamageReduction(int _armorDamageReduction)
{ this->armorDamageReduction = _armorDamageReduction; }

/* ************************************************************************** */