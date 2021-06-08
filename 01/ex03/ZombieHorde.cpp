/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:48:51 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/05 20:43:47 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde() {}
ZombieHorde::ZombieHorde(int _num): zombie_num(_num) {}
ZombieHorde::~ZombieHorde() {}

void	ZombieHorde::set_zombie_num(const int &_num)
{ this->zombie_num = _num; }

const int	&ZombieHorde::get_zombie_num(void) const
{ return (this->get_zombie_num()); }