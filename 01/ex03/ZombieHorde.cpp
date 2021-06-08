/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:48:51 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 18:49:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {}
ZombieHorde::ZombieHorde(int _num): zombie_num(_num)
{	
	if (this->zombie_num <= 0 || this->zombie_num >= 2147483647)
	{
		std::cout << "error num" << std::endl;
		std::cout << "set zombie_num = 1" << std::endl;
		this->zombie_num = 1;
	}
	this->zombies = new Zombie[this->zombie_num];
	for (int i = 0; i < this->zombie_num; i++)
	{
		this->zombies[i].set_name(std::to_string(std::rand()));
		this->zombies[i].set_type(std::to_string(std::rand()));
	}
}

ZombieHorde::~ZombieHorde()
{ delete [] this->zombies; }

void	ZombieHorde::set_zombie_num(const int &_num)
{ this->zombie_num = _num; }

const int	&ZombieHorde::get_zombie_num(void) const
{ return (this->zombie_num); }

void	ZombieHorde::announce(void)
{
	int		num;

	num = 0;
	while (num < this->zombie_num)
	{
		this->zombies[num].announce();
		num++;
	}
}