/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:18:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:30:41 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	protected:
		std::string		name;
		int		apcost;
		int		damage;

		AWeapon();

	public:
		AWeapon(std::string const & _name, int _apcost, int _damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &		operator=( AWeapon const & rhs );

		// GETTER
		std::string const	&getName(void) const;
		int		getAPcost(void) const;
		int		getDamage(void) const;

		virtual void	attack(void) const = 0;

};

// std::ostream &			operator<<( std::ostream & o, AWeapon const & i );

#endif /* ********************************************************* AWEAPON_H */