/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:48:22 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 07:36:26 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib> // rand() 함수 header
#include <ctime> // time seed 설정하기 위한 header

class FragTrap
{
	private:
		std::string		name;
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;

	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		
		FragTrap	&operator=(FragTrap const &op);

		/* GETTER*/
		const std::string		&getName(void) const;
		int		getHitPoints(void) const;
		int		getMaxHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getMaxEnergyPoints(void) const;
		int		getLevel(void) const;
		int		getMeleeAttackDamage(void) const;
		int		getRangedAttackDamage(void) const;
		int		getArmorDamageReduction(void) const;

		/* SETTER*/
		void	setName(const std::string &_name);
		void	setHitPoints(int _hitPoints);
		void	setMaxHitPoints(int _maxHitPoints);
		void	setEnergyPoints(int _energyPoints);
		void	setMaxEnergyPoints(int _maxEnergyPoints);
		void	setLevel(int _level);
		void	setMeleeAttackDamage(int _meleeAttackDamage);
		void	setRangedAttackDamage(int _rangedAttackDamage);
		void	setArmorDamageReduction(int _armorDamageReduction);

		/* MEMBER FUNCTION */
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif