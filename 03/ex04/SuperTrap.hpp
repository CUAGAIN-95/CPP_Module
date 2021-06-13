/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:15:29 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 20:38:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
	private:

	public:
		SuperTrap();
		SuperTrap(std::string _name);
		SuperTrap(const SuperTrap &src);
		~SuperTrap();

		SuperTrap	&operator=(const SuperTrap &op);

		/* MEMBER FUNCTION */
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
	

};

// std::ostream &			operator<<( std::ostream & o, SuperTrap const & i );

#endif /* ******************************************************* SUPERTRAP_H */