/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:50:18 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:48:37 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* CONSTRUCTOR */

FragTrap::FragTrap()
	:	ClapTrap("yeonhlee", 100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP")
{
	std::cout << this->type << " Default constructor called -FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string _name)
	:	ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP")
{
	std::cout << this->type << " Name parameter constructor called -FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << this->type << " Copy constructor called -FragTrap" << std::endl;
	*this = src;
}

/* DESTRUCTOR */

FragTrap::~FragTrap()
{
	std::cout << this->type << " Destrutor called -FragTrap" << std::endl;
}

/* OVERLOAD */

FragTrap	&FragTrap::operator=(const FragTrap &op)
{
	std::cout << this->type << " Assignation operator called -FragTrap" << std::endl;
	if (this != &op)
		this->ClapTrap::operator=(op);
	return (*this);
}

/* ACCESSOR */

/* METHODS */

// MEMBER FUNCTION
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			rand_num = std::rand() % 5;
	std::string	name_list[5] = {"Mmmmmmmmmm!", "Fraaaaaank!!", "Craaaaaach!!!", \
								"Boooooooom!!!!", "Pooooooooooop!!!!!"};

	this->energyPoints -= 25;
	if (this->energyPoints < 0)
	{
		this->energyPoints = 0;
		std::cout << this->type << " Not enough energy." << std::endl;
	}
	else
	{
		std::cout << this->type << " " << this->name << " attacks " << target \
				<< " at vaulthunter_dot, causing " 	<< rand_num * 10 \
				<< " points of damage!" \
				<< " Current energyPoint is " << this->energyPoints << std::endl;
		std::cout << name_list[rand_num] << std::endl;
	}
}