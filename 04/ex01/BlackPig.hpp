/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BlackPig.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:49:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 12:57:10 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLACKPIG_HPP
# define BLACKPIG_HPP

# include "Enemy.hpp"

class BlackPig : public Enemy
{
	public:
		BlackPig();
		BlackPig( BlackPig const & src );
		virtual ~BlackPig();

		BlackPig &		operator=( BlackPig const & rhs );
		
		// MEMBER FUNCTION
		void	takeDamage(int);
};

std::ostream &			operator<<( std::ostream & o, BlackPig const & i );

#endif /* ******************************************************** BLACKPIG_H */