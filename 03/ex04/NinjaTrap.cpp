/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:04:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:48:11 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
	:	ClapTrap("yeonhleeNinja", 60, 60 ,120, 120, 1, 60, 5, 0, "NINJ4-TP")
{
	std::cout << this->type << " Default constructor called -NinjaTrap" << std::endl;
}

NinjaTrap::NinjaTrap(std::string _name)
:	ClapTrap(_name, 60, 60 ,120, 120, 1, 60, 5, 0, "NINJ4-TP")
{
	std::cout << this->type << " Name parameter constructor called -NinjaTrap" << std::endl;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
	std::cout << this->type << " Copy constructor called -NinjaTrap" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << this->type << " Destrutor called -NinjaTrap" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &op)
{
	std::cout << this->type << " Assignation operator called -NinjaTrap" << std::endl;
	if (this != &op)
		this->ClapTrap::operator=(op);
	return (*this);
}

// std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

/* MEMBER FUNCTION */
void	NinjaTrap::ninjaShoebox(ClapTrap &claptrap)
{
	std::cout << this->type << " " << this->name << " likes " << claptrap.getType() << " " << claptrap.getName() << " :)" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &fragtrap)
{
	std::cout << this->type << " " << this->name << " hates " << fragtrap.getType() << " " << fragtrap.getName() << " :(" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scavtrap)
{
	std::cout << this->type << " " << this->name << " loves " << scavtrap.getType() << " " << scavtrap.getName() << " ^^b" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninjatrap)
{
	std::cout << this->type << " " << this->name << " laughs at " << ninjatrap.getType() << " " << ninjatrap.getName() << " XD" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */