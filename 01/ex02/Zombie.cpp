/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:23:20 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/02 00:30:41 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string _type, std::string _name): type(_type), name(_name) {}
Zombie::~Zombie() {}

void	Zombie::set_type(const std::string &_type)
{ this->type = _type; }
void	Zombie::set_name(const std::string &_name)
{ this->name = _name; }

const std::string	&Zombie::get_type(void) const
{ return (this->type); }
const std::string	&Zombie::get_name(void) const
{ return (this->name); }

void	Zombie::announce(void)
{
	std::cout << "<" << get_name() << " " << "(" << get_type() << ")> Braiiiiiiinnnssss..." << std::endl;
}