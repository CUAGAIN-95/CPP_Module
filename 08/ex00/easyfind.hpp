/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:40:38 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 15:07:41 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>

class CannotFindValue: public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Can not find value!");
		}
};

template <typename T>
typename T::iterator easyfind(T &c, int i)
{
	typename T::iterator	it;

	if ((it = std::find(c.begin(), c.end(), i)) == c.end())
		throw CannotFindValue();
	return (it);
}

#endif /* ******************************************************** EASYFIND_H */