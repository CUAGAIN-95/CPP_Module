/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:13:29 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/03 00:58:41 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

#include <cstdlib>	//std::rand()
#include <ctime>	//std::time()
#include <string>	//std::to_string()

ZombieEvent::ZombieEvent() {}
ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setZombieType(std::string _type)
{ this->type = _type; }

Zombie*	ZombieEvent::newZombie(std::string _name)
{ return (new Zombie(this->type, _name)); }

Zombie*	ZombieEvent::randomChump(void) //랜덤 타입, 이름을 가진 좀비 생성
{
	Zombie*	zombie = new Zombie(std::to_string(std::rand()), std::to_string(std::rand()));

	return (zombie);
}