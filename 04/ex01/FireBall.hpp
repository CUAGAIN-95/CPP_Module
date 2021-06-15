/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FireBall.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:44:39 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:57:24 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "AWeapon.hpp"

class FireBall : public AWeapon
{
	public:
		FireBall();
		FireBall( FireBall const & src );
		virtual ~FireBall();

		FireBall &		operator=( FireBall const & rhs );
	
		// MEMBER FUNCTION
		void	attack(void) const;
};

// std::ostream &			operator<<( std::ostream & o, FireBall const & i );

#endif /* ******************************************************** FIREBALL_H */