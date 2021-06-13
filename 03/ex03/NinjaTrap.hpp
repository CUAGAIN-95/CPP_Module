/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:01:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:06:54 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &src);
		~NinjaTrap();

		NinjaTrap		&operator=(const NinjaTrap &op);

		/* MEMBER FUNCTION */
		void	ninjaShoebox(ClapTrap &claptrap);
		void	ninjaShoebox(FragTrap &fragtrap);
		void	ninjaShoebox(ScavTrap &scavtrap);
		void	ninjaShoebox(NinjaTrap &ninjatrap);
};

// std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif /* ******************************************************* NINJATRAP_H */