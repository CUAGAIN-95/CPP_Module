/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 03:47:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 12:48:44 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Student.hpp"

int		main(void)
{
	Array<int> arr;

	std::cout << arr.size() << std::endl;		// default size = 0

	try {
		Array<std::string> arr1(2);
		arr1[0] = "hello";
		arr1[1] = "world";
		std::cout << arr1[0] << std::endl;
		std::cout << arr1[1] << std::endl;
		// std::cout << arr1[2] << std::endl;	// exception error case
		Array<Student*> arr2(3);
		arr2[0] = new Student("Apeach", 1);
		arr2[1] = new Student("Ryan", 2);
		arr2[2] = new Student("Frodo", 3);
		std::cout << *(arr2[0]) << std::endl;
		std::cout << *(arr2[1]) << std::endl;
		std::cout << *(arr2[2]) << std::endl;
		delete arr2[0];
		delete arr2[1];
		delete arr2[2];
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}