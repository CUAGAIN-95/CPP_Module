/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:01:37 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:33:13 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon) {}
HumanA::~HumanA() {}

void	HumanA::setName(const std::string &_name)
{ this->name = _name; }

const std::string	&HumanA::getName(void) const
{ return (this->name);}

void	HumanA::attack(void) const
{
	std::cout << this->getName() << " attacks with his " << this->weapon.getType() << std::endl;
}