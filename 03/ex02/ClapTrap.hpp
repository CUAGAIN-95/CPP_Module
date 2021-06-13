#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib> // rand() 함수 header
# include <ctime> // time seed 설정하기 위한 header


class ClapTrap
{
	protected:
		std::string		name;
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;

		std::string		type;

	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(std::string _name, \
				int _hitPoints, int _maxHitPoints, \
				int _energyPoints, int _maxEnergyPoints, \
				int _level, \
				int _meleeAttackDamage, int _rangedAttackDamage, \
				int _armorDamageReduction, \
				std::string _type);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &op);

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

		const std::string		&getType(void) const;

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

		void	setType(const std::string &_type);

		/* MEMBER FUNCTION */
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

// std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */