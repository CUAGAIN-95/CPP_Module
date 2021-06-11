/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:48:22 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/11 22:52:22 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	private:
		std::string		name;
		int				hitPoint = 100;
		int				maxHitPoint = 100;
		int				energyPoint = 100;
		int				maxEnergyPoints = 100;
		int				level = 1;
		int				meleeAttackDamage = 30;
		int				rangedAttackDamage = 20;
		int				armorDamageReduction = 5;

	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		
		FragTrap	&operator=(FragTrap const &op);

		/* GETTER*/
		const std::string		&getName(void) const;

		/* SETTER*/
		void	setName(const std::string &_name);

		/* MEMBER FUNCTION */
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
};

#endif