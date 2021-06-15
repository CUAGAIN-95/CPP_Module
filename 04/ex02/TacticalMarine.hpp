/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:35:05 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 16:45:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		virtual ~TacticalMarine();

		TacticalMarine &		operator=( TacticalMarine const & rhs );

		// MEMBER FUNCTION
		virtual ISpaceMarine*	clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
};

#endif /* ************************************************** TACTICALMARINE_H */