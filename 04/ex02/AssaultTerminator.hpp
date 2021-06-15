/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:38:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 16:47:06 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		virtual ~AssaultTerminator();

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

		// MEMBER FUNCTION
		virtual ISpaceMarine*	clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
};

#endif /* *********************************************** ASSAULTTERMINATOR_H */