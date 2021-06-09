/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:01:25 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 18:16:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string		type;

	public:
		Weapon();
		Weapon(std::string _type);
		~Weapon();

		void	setType(const std::string &_type);
		const std::string &getType(void) const;
};

#endif