/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:17:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:05:21 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string		type;
		std::string		name;
		
	public:
		Zombie();
		Zombie(std::string _type, std::string _name);
		~Zombie();

		void	set_type(const std::string &_type);
		void	set_name(const std::string &_name);

		const std::string	&get_type(void) const;
		const std::string	&get_name(void) const;
		
		void	announce(void);
};

