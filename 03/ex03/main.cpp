/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:26:54 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:08:01 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int		main(void)
{
	// 랜덤 시드 설정 (시간을 기준)
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	NinjaTrap	n("yeonhlee_ninja");
	NinjaTrap	n_f("ninja_friend");
	ClapTrap	c("ccc");
	FragTrap	f("ffff");
	ScavTrap	s("ss");
	std::string	target = "target";

	std::cout << std::endl;
	std::cout << n.getName() << std::endl;
	std::cout << std::endl;

	n.rangedAttack(target);
	n.meleeAttack(target);
	std::cout << std::endl;
	
	n.takeDamage(50);
	n.takeDamage(50);
	n.beRepaired(30);
	n.beRepaired(100);
	std::cout << std::endl;

	n.ninjaShoebox(c);
	n.ninjaShoebox(f);
	n.ninjaShoebox(s);
	n.ninjaShoebox(n_f);
	std::cout << std::endl;

	return (0);
}