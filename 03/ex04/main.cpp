/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:26:54 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 21:03:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int		main(void)
{
	// 랜덤 시드 설정 (시간을 기준)
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	// SuperTrap	super;
	SuperTrap	super("superMan");
	std::string	target = "target";
	


	std::cout << std::endl;
	std::cout << super.getName() << std::endl;
	std::cout << std::endl;
	super.rangedAttack(target);
	super.meleeAttack(target);
	std::cout << std::endl;
	
	super.takeDamage(50);
	super.takeDamage(60);
	super.beRepaired(30);
	super.beRepaired(100);
	super.beRepaired(100);
	std::cout << std::endl;

	super.vaulthunter_dot_exe(target);
	super.vaulthunter_dot_exe(target);
	super.vaulthunter_dot_exe(target);
	super.vaulthunter_dot_exe(target);
	super.vaulthunter_dot_exe(target);
	super.vaulthunter_dot_exe(target);
	std::cout << std::endl;
	

	NinjaTrap	n("yeonhlee_ninja");
	NinjaTrap	n_f("ninja_friend");
	ClapTrap	c("ccc");
	FragTrap	f("ffff");
	ScavTrap	s("ss");

	n.ninjaShoebox(c);
	n.ninjaShoebox(f);
	n.ninjaShoebox(s);
	n.ninjaShoebox(n_f);
	std::cout << std::endl;

	

	// std::cout << std::endl;
	// std::cout << n.getName() << std::endl;
	// std::cout << std::endl;

	// n.rangedAttack(target);
	// n.meleeAttack(target);
	// std::cout << std::endl;
	
	// n.takeDamage(50);
	// n.takeDamage(50);
	// n.beRepaired(30);
	// n.beRepaired(100);
	// std::cout << std::endl;

	// n.ninjaShoebox(c);
	// n.ninjaShoebox(f);
	// n.ninjaShoebox(s);
	// n.ninjaShoebox(n_f);
	// std::cout << std::endl;

	return (0);
}