/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:49:35 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 08:06:50 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	// 랜덤 시드 설정 (시간을 기준)
	std::srand(static_cast<unsigned int>(std::time(0)));

	FragTrap	a;
	FragTrap	b("parameter");
	FragTrap	c(a);
	const std::string &target = "target";

	std::cout << std::endl;
	std::cout << "default constructor >> " << a.getName() << std::endl;
	std::cout << "parameter constructor >> " << b.getName() << std::endl;
	std::cout << "copy constructor >> " << c.getName() << std::endl;
	std::cout << std::endl;

	// 함수 출력
	a.rangedAttack(target);
	a.meleeAttack(target);
	a.vaulthunter_dot_exe(target);
	a.vaulthunter_dot_exe(target);
	a.vaulthunter_dot_exe(target);
	a.vaulthunter_dot_exe(target);
	a.vaulthunter_dot_exe(target);
	a.vaulthunter_dot_exe(target);
	std::cout << std::endl;

	a.takeDamage(50);
	a.beRepaired(30);
	a.takeDamage(100);
	std::cout << std::endl;

	// max 값을 넘어가는 상황
	a.beRepaired(200);
	a.takeDamage(200);
	std::cout << std::endl;
	return (0);
}