/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:40:39 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 14:47:31 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

#include <vector>
#include <deque>
#include <list>

int		main(void)
{
	try {
		size_t	num = 5;

		std::vector<int> vec;
		// vector를 사용해서 데이터 넣기
		for (size_t i = 0; i < num; ++i)
			vec.push_back(11 * (i + 1));
		// 넣은 데이터 출력
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		// 원하는 값 찾기
		std::vector<int>::iterator vec_it = easyfind(vec, 55);
		std::cout << *vec_it << std::endl;
		std::cout << "---------------" << std::endl;

		// // error case
		// std::vector<int>::iterator vec_it2 = easyfind(vec, 21);
		// std::cout << *vec_it2 << std::endl;
		
		std::deque<int> deq;
		for (size_t i = 0; i < num; ++i)
			deq.push_back((i + 1));
		std::deque<int>::iterator deq_it = easyfind(deq, 3);
		std::cout << *deq_it << std::endl;

		std::cout << "---------------" << std::endl;

		std::list<int> lst;
		for (size_t i = 0; i < num; ++i)
			lst.push_back(5 * (i + 1));
		std::list<int>::iterator lst_it1 = easyfind(lst, 10);
		std::cout << *lst_it1 << std::endl;
		//error case
		std::list<int>::iterator lst_it2 = easyfind(lst, 0);
		std::cout << *lst_it2 << std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}