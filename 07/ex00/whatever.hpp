/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 03:10:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 03:18:28 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T &a, T &b)
{
	T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T a, T b)
{
	return (a > b ? b : a);
}

template <typename T>
T		max(T a, T b)
{
	return (a < b ? b : a);
}