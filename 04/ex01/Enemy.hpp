/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:56:55 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 13:18:58 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int				hp;
		std::string		type;

		Enemy();

	public:
		Enemy(int _hp, std::string const & _type);
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &		operator=( Enemy const & rhs );

		// GETTER
		std::string const	&getType(void) const;
		int		getHP(void) const;

		// MEMBER FUNCTION
		virtual void	takeDamage(int) = 0;


};

// std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */