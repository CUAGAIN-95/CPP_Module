/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 21:27:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/11 18:51:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int		value;
		static const int	bits = 8;

	public:

		Fixed();
		Fixed( const int );
		Fixed( const float );
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		/* GETTER*/
		int		getRawBits(void) const;

		/* SETTER*/
		void	setRawBits(int const raw);

		/* MEMBER FUNCTION */
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */