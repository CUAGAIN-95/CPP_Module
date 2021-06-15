/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:37:38 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 16:35:02 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int		count;
		ISpaceMarine** units;
		
	public:
		Squad();
		Squad( Squad const & src );
		~Squad();

		Squad &		operator=( Squad const & rhs );

		// GETTER
		int				getCount(void) const;
		ISpaceMarine*	getUnit(int) const;
		
		// MEMBER FUNCTION
		int				push(ISpaceMarine*);
};

// std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */