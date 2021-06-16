/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 03:31:51 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 03:37:28 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename A, typename S, typename F>
void	iter(A arr, S size, F func)
{
	for (S i = 0; i < size; i++)
		func(arr[i]);
}