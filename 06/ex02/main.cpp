/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:55:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 13:33:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identify.hpp"

int		main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 3; ++i)
	{
		Base	*b = generate();

		std::cout << "Identify from pointer: ";
		identify_from_pointer(b);
		std::cout << ", ";
		std::cout << "Identify from reference: ";
		identify_from_reference(*b);
		std::cout << std::endl;
		delete (b);
	}
	return (0);
}