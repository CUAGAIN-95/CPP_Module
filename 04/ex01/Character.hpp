/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:18:12 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:30:32 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	protected:
		std::string		name;
		int				ap;
		AWeapon			*aweapon;

		Character();

	public:
		Character(std::string const & _name);
		Character(std::string const & _name, int _ap);
		Character( Character const & src );
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		// GETTER
		const std::string	&getName(void) const;
		int			getAP(void) const;
		AWeapon*	getAWeapon(void) const;

		// MEMBER FUNCTION
		void	recoverAP(void);
		void	equip(AWeapon*);
		virtual void	attack(Enemy*);
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */