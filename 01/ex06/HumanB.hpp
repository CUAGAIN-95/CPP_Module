/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:02:25 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 19:50:34 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string		name;
		const Weapon*	weapon;
	public:
		HumanB();
		HumanB(std::string _name);
		~HumanB();

		void	setName(const std::string &_name);
		void	setWeapon(const Weapon &_weapon);
		const std::string	&getName(void) const;
		
		void	attack(void);
};

#endif
