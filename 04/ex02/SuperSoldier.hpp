/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperSoldier.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:06:36 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 18:07:35 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERSOLDIER_HPP
# define SUPERSOLDIER_HPP

# include "ISpaceMarine.hpp"

class SuperSoldier : public ISpaceMarine
{
	public:
		SuperSoldier();
		SuperSoldier( SuperSoldier const & src );
		virtual ~SuperSoldier();

		SuperSoldier &		operator=( SuperSoldier const & rhs );

		// MEMBER FUNCTION
		virtual ISpaceMarine*	clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
};

std::ostream &			operator<<( std::ostream & o, SuperSoldier const & i );

#endif /* **************************************************** SUPERSOLDIER_H */