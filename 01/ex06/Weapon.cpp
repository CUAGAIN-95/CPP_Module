/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:01:16 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 18:12:16 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string _type): type(_type) {}
Weapon::~Weapon() {}

void	Weapon::setType(const std::string &_type)
{ this->type = _type; }
const std::string &Weapon::getType(void) const
{ return (this->type); }