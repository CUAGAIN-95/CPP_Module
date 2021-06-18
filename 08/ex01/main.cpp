/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:04:55 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 16:16:22 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <string>

int		main(void)
{
	try {
		Span sp = Span(5);

		sp.addNumber(5);
		// sp.addNumber(5);			// check dup
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(12);		// check full

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// Span empty(3);
		// std::cout << empty.shortestSpan() << std::endl;
		// std::cout << empty.longestSpan() << std::endl;

		// Span one(3);
		// one.addNumber(1);
		// std::cout << one.shortestSpan() << std::endl;
		// std::cout << one.longestSpan() << std::endl;

		std::vector<int> big;
		Span sp2 = Span(10000);
		for (int i=0; i < 10000; ++i)
			big.push_back(i);
		sp2.addNumber(big.begin(), big.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		
		
		// for (std::vector<int>::iterator it = big.begin(); it != big.end(); it++)
		// 	std::cout << *it << std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}