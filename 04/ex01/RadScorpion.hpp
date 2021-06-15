/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 22:13:15 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:30:12 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion( RadScorpion const & src );
		virtual ~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );
		
		// MEMBER FUNCTION
		void	takeDamage(int);
};

// std::ostream &			operator<<( std::ostream & o, RadScorpion const & i );

#endif /* ***************************************************** RADSCORPION_H */