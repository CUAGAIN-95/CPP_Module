/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:12:32 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/16 16:34:04 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	yh("yeonhlee", 100);

	std::cout << yh;
	yh.decrement();		// 등급 떨어짐
	std::cout << yh;
	yh.increment();		// 등급 올라감
	std::cout << yh;

	std::cout << std::endl;
	std::cout << "Exceptions case" << std::endl;
	std::cout << std::endl;

	try	// 너무 높은 값 설정
	{
		Bureaucrat	ex1("ex1", 0);
		std::cout << ex1;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	try	// 너무 낮은 값 설정
	{
		Bureaucrat	ex2("ex2", 151);
		std::cout << ex2;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try	// 함수 사용으로 너무 높은 값 설정
	{
		Bureaucrat	ex3("ex3", 1);
		std::cout << ex3;
		ex3.increment();
		std::cout << ex3;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	try	// 함수 사용으로 너무 낮은 값 설정
	{
		Bureaucrat	ex4("ex4", 150);
		std::cout << ex4;
		ex4.decrement();
		std::cout << ex4;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}