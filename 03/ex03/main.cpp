/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:26:54 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 17:56:15 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	// 랜덤 시드 설정 (시간을 기준)
	std::srand(static_cast<unsigned int>(std::time(0)));

	FragTrap	b("Frag_yeonhlee");
	ScavTrap	a;
	const std::string &target = "target";

	std::cout << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << b.getName() << std::endl;
	std::cout << std::endl;

	// 함수 출력
	a.rangedAttack(target);
	a.meleeAttack(target);
	std::cout << std::endl;
	
	b.rangedAttack(target);
	b.meleeAttack(target);
	std::cout << std::endl;

	a.takeDamage(50);
	a.beRepaired(30);
	a.takeDamage(100);
	std::cout << std::endl;
	
	b.takeDamage(50);
	b.beRepaired(30);
	b.takeDamage(100);
	std::cout << std::endl;

	// max 값을 넘어가는 상황
	a.beRepaired(200);
	a.takeDamage(200);
	std::cout << std::endl;
	
	b.beRepaired(200);
	b.takeDamage(200);
	std::cout << std::endl;

	a.challengeNewComer();
	a.challengeNewComer();
	a.challengeNewComer();
	a.challengeNewComer();

	b.vaulthunter_dot_exe(target);
	b.vaulthunter_dot_exe(target);
	b.vaulthunter_dot_exe(target);
	b.vaulthunter_dot_exe(target);
	b.vaulthunter_dot_exe(target);
	b.vaulthunter_dot_exe(target);
	
	std::cout << std::endl;
	return (0);
}