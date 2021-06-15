/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 01:07:17 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 13:09:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"		// 생략가능 헤더파일들
#include "Enemy.hpp"
#include "Character.hpp"

#include "PlasmaRifle.hpp"	// aweapon
#include "PowerFist.hpp"
#include "FireBall.hpp"

#include "SuperMutant.hpp"	// enemy
#include "RadScorpion.hpp"
#include "BlackPig.hpp"

int		main(void)
{
	Character*	me = new Character("me");
	
	std::cout << *me;

	Enemy*	b = new RadScorpion();

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete me;	// character delete

	// if (b != NULL)		// b가 안죽었을 때 delete 하는 방법 ? ㅠ
	// 	delete b;

	delete pr;	// plasma rifle delete
	delete pf;	// power fist delete

//------------------ TEST CASE -----------------

	std::cout << std::endl;
	std::cout << "\t>>test case<<" << std::endl;
	std::cout << std::endl;

	Character*	yh = new Character("yoenhlee");

	Enemy*		sm = new SuperMutant();
	Enemy*		bp = new BlackPig();

	AWeapon*	fb = new FireBall();

	std::cout << *yh;

	yh->equip(fb);
	std::cout << *yh;
	yh->attack(bp);		// super mutant delete

	std::cout << *yh;
	yh->attack(sm);
	std::cout << *yh;
	yh->recoverAP();
	std::cout << *yh;
	yh->recoverAP();
	std::cout << *yh;
	yh->attack(sm);		// super mutant delete
	std::cout << *yh;

	delete yh;	// character 해제

	delete fb;	// fireball 해제

	return (0);
}