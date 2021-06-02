/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:17:14 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/03 00:39:12 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));	//랜덤 시드 설정 (시간을 기준)

	Zombie	zombie_yh("42", "yeonhlee");
	Zombie*	zombie;
	ZombieEvent zombieEvent;

	std::cout << "\t Zombie" << "  <NAME (TYPE)>" << std::endl;
	std::cout << std::endl;
	
	zombie_yh.announce(); // 기본적인 클래스
	
	zombieEvent.setZombieType("new type");		// 좀비이벤트 객체에 타입을 저장
	zombie = zombieEvent.newZombie("new name");	// 새로운 좀비를 만드는 함수 타입은 맴버인자에 저장되어있음 이름은 인자로 넘겨줌
	zombie->announce();
	delete zombie;

	for (int i = 0; i < 5; i++)
	{
		zombie = zombieEvent.randomChump(); // 랜덤인자를 사용해서 좀비를 만듬
		zombie->announce();
		delete zombie;
	}
	return (0);
}