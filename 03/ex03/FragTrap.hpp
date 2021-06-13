/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:48:22 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/13 17:44:38 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		
		FragTrap	&operator=(FragTrap const &op);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif