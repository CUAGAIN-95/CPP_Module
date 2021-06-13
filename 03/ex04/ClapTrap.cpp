#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
	:	name("parent class"), \
		hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), \
		level(1), \
		meleeAttackDamage(50), rangedAttackDamage(40), armorDamageReduction(10), \
		type("CL4P-TP")
{
	std::cout << this->type << " Default constructor called -- parent class" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
	:	name(_name), \
		hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), \
		level(1), \
		meleeAttackDamage(50), rangedAttackDamage(40), armorDamageReduction(10), \
		type("CL4P-TP")
{
	std::cout << this->type << " Name parameter constructor called -- parent class" << std::endl;
}

ClapTrap::ClapTrap(std::string _name, \
			int _hitPoints, int _maxHitPoints, int _energyPoints, int _maxEnergyPoints, \
			int _level, \
			int _meleeAttackDamage, int _rangedAttackDamage, int _armorDamageReduction, \
			std::string _type)
	:	name(_name), \
		hitPoints(_hitPoints), maxHitPoints(_maxHitPoints), energyPoints(_energyPoints), maxEnergyPoints(_maxEnergyPoints), \
		level(_level), \
		meleeAttackDamage(_meleeAttackDamage), rangedAttackDamage(_rangedAttackDamage), armorDamageReduction(_armorDamageReduction), \
		type(_type)
{
	std::cout << this->type << " Parameter constructor called -- parent class" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << this->type << " Copy constructor called -- parent class" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << this->type << " Destrutor called -- parent class" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
	std::cout << type << " Assignation operator called" << std::endl;
	if (this != &op)
	{
		this->name = op.getName();
		this->hitPoints = op.getHitPoints();
		this->maxHitPoints = op.getMaxHitPoints();
		this->energyPoints = op.getEnergyPoints();
		this->maxEnergyPoints = op.getMaxEnergyPoints();
		this->level = op.getLevel();
		this->meleeAttackDamage = op.getMeleeAttackDamage();
		this->rangedAttackDamage = op.getRangedAttackDamage();
		this->armorDamageReduction = op.getArmorDamageReduction();
		this->type = op.getType();
	}
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

/* MEMBER FUNCTION */
void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->type << " "<< this->name << " attacks " << target << " at range, causing " \
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->type << " "<< this->name << " attacks " << target << " at melee, causing " \
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	int		damage;
	
	damage = (amount - this->armorDamageReduction);
	if (damage < 0)
		damage = 0;
	this->hitPoints -= damage;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << this->type << " " << this->name << " is taken damage " << damage \
			<< ", current hitpoints are " << this->hitPoints << "!" << std::endl;
	if (this->hitPoints == 0)
		std::cout << this->type << " " << this->name << " is died..." << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == this->maxHitPoints)
	{
		std::cout << this->type << " " << this->name << " is max hitpoints!!" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << this->type << " " << this->name << " is repaired " << amount \
			<< ", current hitpoints are " << this->hitPoints << "!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::string	&ClapTrap::getName(void) const
{ return (this->name); }

int		ClapTrap::getHitPoints(void) const
{ return (this->hitPoints); }

int		ClapTrap::getMaxHitPoints(void) const
{ return (this->maxHitPoints); }

int		ClapTrap::getEnergyPoints(void) const
{ return (this->energyPoints); }

int		ClapTrap::getMaxEnergyPoints(void) const
{ return (this->maxEnergyPoints); }

int		ClapTrap::getLevel(void) const
{ return (this->level); }

int		ClapTrap::getMeleeAttackDamage(void) const
{ return (this->meleeAttackDamage); }

int		ClapTrap::getRangedAttackDamage(void) const
{ return (this->rangedAttackDamage); }

int		ClapTrap::getArmorDamageReduction(void) const
{ return (this->armorDamageReduction); }

const std::string	&ClapTrap::getType(void) const
{ return (this->type); }

// SETTER
void	ClapTrap::setName(const std::string &_name)
{ this->name = _name; }

void	ClapTrap::setHitPoints(int _hitPoints)
{ this->hitPoints = _hitPoints; }

void	ClapTrap::setMaxHitPoints(int _maxHitPoints)
{ this->maxHitPoints = _maxHitPoints; }

void	ClapTrap::setEnergyPoints(int _energyPoints)
{ this->energyPoints = _energyPoints; }

void	ClapTrap::setMaxEnergyPoints(int _maxEnergyPoints)
{ this->maxEnergyPoints = _maxEnergyPoints; }

void	ClapTrap::setLevel(int _level)
{ this->level = _level; }

void	ClapTrap::setMeleeAttackDamage(int _meleeAttackDamage)
{ this->meleeAttackDamage = _meleeAttackDamage; }

void	ClapTrap::setRangedAttackDamage(int _rangedAttackDamage)
{ this->rangedAttackDamage = _rangedAttackDamage; }

void	ClapTrap::setArmorDamageReduction(int _armorDamageReduction)
{ this->armorDamageReduction = _armorDamageReduction; }

void	ClapTrap::setType(const std::string &_type)
{ this->type = _type; }
/* ************************************************************************** */