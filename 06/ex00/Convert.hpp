/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:49:03 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 07:14:05 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>

class Convert
{
	private:
		std::string		str;
		bool			isVaildStr;
		double			d;

		Convert();

	public:
		Convert(std::string const &_str);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

		// MEMBER FUNCTION
		void	checkIsVaildStr(void);

		void	disPlayChar(void) const;
		void	disPlayInt(void) const;
		void	disPlayFloat(void) const;
		void	disPlayDouble(void) const;

		// GEETER
		const std::string & getStr(void) const;
		bool	getIsVaildStr(void) const;
		double	getDouble(void) const;

		// EXCEPTION
};

std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */