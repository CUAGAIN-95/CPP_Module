/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:02:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:38:38 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}
HumanB::HumanB(std::string _name): name(_name) {}
HumanB::~HumanB() {}

void	HumanB::setName(const std::string &_name)
{ this->name = _name; }

void	HumanB::setWeapon(const Weapon &_weapon)
{ this->weapon = &_weapon; }

const std::string	&HumanB::getName(void) const
{ return (this->name);}

void	HumanB::attack(void) const
{
	std::cout << this->getName() << " attacks with his " << this->weapon->getType() << std::endl;
}