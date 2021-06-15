/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:20:41 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 21:23:08 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire( Fire const & src );
		virtual ~Fire();

		Fire &		operator=( Fire const & rhs );

		// MEMBER FUNCTION
		virtual AMateria* clone() const;
		virtual void	use(ICharacter& target);
};

#endif /* ************************************************************ FIRE_H */