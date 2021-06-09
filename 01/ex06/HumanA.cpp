/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:01:37 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 19:20:29 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon) {}
HumanA::~HumanA() {}

void	HumanA::setName(const std::string _name)
{ this->name = _name; }

const std::string	&HumanA::getName(void) const
{ return (this->name);}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with his " << this->weapon.getType() << std::endl;
}