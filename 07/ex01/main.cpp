/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 03:31:10 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 03:46:06 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	squared(int n)
{
	std::cout << n * n << std::endl;
}

void	alive(std::string a)
{
	std::cout << a << " is alive!" << std::endl;
}

int		main(void)
{
	int		arr[3] = {5 ,3, 12};

	iter(arr, 3, squared);

	std::string arr2[3] = {"Tom", "Bob", "Jim"};

	iter(arr2, 3, alive);

	return (0);
}