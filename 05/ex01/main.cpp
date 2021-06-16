/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:09:19 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/16 19:48:36 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	b("yh", 51);

	std::cout << b << std::endl;

	Form		f("house", 50, 100);

	try
	{
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	std::cout << std::endl << std::endl;

	try
	{
		Form		fa("house", 100, 100);

		b.signForm(fa);
		b.signForm(fa);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	// // grade
	// try
	// {
	// 	Form	f0("F0", 0, 20);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// try
	// {
	// 	Form	f1("F1", 151, 20);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// // excute
	// try
	// {
	// 	Form	f2("F2", 50, 0);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// try
	// {
	// 	Form	f3("F3", 50, 151);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	
	
	return (0);
}