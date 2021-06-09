/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:01:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 19:19:48 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string		name;
		Weapon			&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();

		void	setName(const std::string _name);
		const std::string	&getName(void) const;
		
		void	attack(void);
};

#endif
