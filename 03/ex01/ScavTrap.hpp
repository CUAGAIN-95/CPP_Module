/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:47:55 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 13:55:50 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
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
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap		&operator=(ScavTrap const &op);

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

		void	challengeNewComer(void);
};

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */