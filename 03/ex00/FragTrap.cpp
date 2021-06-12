/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:50:18 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 08:08:18 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* CONSTRUCTOR */

FragTrap::FragTrap()
	:	name("yeonhlee"), \
		hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), \
		level(1), \
		meleeAttackDamage(30), rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name)
	:	name(_name), \
		hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), \
		level(1), \
		meleeAttackDamage(30), rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << "Parameter constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* DESTRUCTOR */

FragTrap::~FragTrap()
{
	std::cout << "Destrutor called" << std::endl;
}

/* OVERLOAD */

FragTrap	&FragTrap::operator=(const FragTrap &op)
{
	std::cout << "Assignation operator called" << std::endl;
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

/* ACCESSOR */
// GETTER
const std::string	&FragTrap::getName(void) const
{ return (this->name); }

int		FragTrap::getHitPoints(void) const
{ return (this->hitPoints); }

int		FragTrap::getMaxHitPoints(void) const
{ return (this->maxHitPoints); }

int		FragTrap::getEnergyPoints(void) const
{ return (this->energyPoints); }

int		FragTrap::getMaxEnergyPoints(void) const
{ return (this->maxEnergyPoints); }

int		FragTrap::getLevel(void) const
{ return (this->level); }

int		FragTrap::getMeleeAttackDamage(void) const
{ return (this->meleeAttackDamage); }

int		FragTrap::getRangedAttackDamage(void) const
{ return (this->rangedAttackDamage); }

int		FragTrap::getArmorDamageReduction(void) const
{ return (this->armorDamageReduction); }

// SETTER
void	FragTrap::setName(const std::string &_name)
{ this->name = _name; }

void	FragTrap::setHitPoints(int _hitPoints)
{ this->hitPoints = _hitPoints; }

void	FragTrap::setMaxHitPoints(int _maxHitPoints)
{ this->maxHitPoints = _maxHitPoints; }

void	FragTrap::setEnergyPoints(int _energyPoints)
{ this->energyPoints = _energyPoints; }

void	FragTrap::setMaxEnergyPoints(int _maxEnergyPoints)
{ this->maxEnergyPoints = _maxEnergyPoints; }

void	FragTrap::setLevel(int _level)
{ this->level = _level; }

void	FragTrap::setMeleeAttackDamage(int _meleeAttackDamage)
{ this->meleeAttackDamage = _meleeAttackDamage; }

void	FragTrap::setRangedAttackDamage(int _rangedAttackDamage)
{ this->rangedAttackDamage = _rangedAttackDamage; }

void	FragTrap::setArmorDamageReduction(int _armorDamageReduction)
{ this->armorDamageReduction = _armorDamageReduction; }

/* METHODS */
// MEMBER FUNCTION
void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " \
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " \
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int		damage;
	
	damage = (amount - this->armorDamageReduction);
	if (damage < 0)
		damage = 0;
	this->hitPoints -= damage;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "FR4G-TP " << this->name << " is taken damage " << damage \
			<< ", current hitpoints are " << this->hitPoints << "!" << std::endl;
	if (this->hitPoints == 0)
		std::cout << "FR4G-TP " << this->name << " is died..." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "FR4G-TP " << this->name << " is repaired " << amount \
			<< ", current hitpoints are " << this->hitPoints << "!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			rand_num = std::rand() % 5;
	std::string	name_list[5] = {"Mmmmmmmmmm!", "Fraaaaaank!!", "Craaaaaach!!!", \
								"Boooooooom!!!!", "Pooooooooooop!!!!!"};

	this->energyPoints -= 25;
	if (this->energyPoints < 0)
	{
		this->energyPoints = 0;
		std::cout << "Not enough energy." << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name << " attacks " << target \
				<< " at vaulthunter_dot, causing " 	<< rand_num * 10 \
				<< " points of damage!" \
				<< " Current energyPoint is " << this->energyPoints << std::endl;
		std::cout << name_list[rand_num] << std::endl;
	}
}