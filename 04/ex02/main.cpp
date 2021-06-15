/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:12:22 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 18:18:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "SuperSoldier.hpp"

int		main(void)
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	
	//// test case

	// ISpaceMarine*	bob = new TacticalMarine;
	// ISpaceMarine*	jim = new AssaultTerminator;
	// ISpaceMarine*	tom = new SuperSoldier;

	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// vlc->push(bob);
	// vlc->push(tom);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	// delete vlc;
	
	return (0);
}