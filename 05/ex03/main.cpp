/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 01:15:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 13:11:53 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"

int		main(void)
{
	std::srand(time(NULL));
	// try{
	// 	// Bureaucrat	bur("bur", 30);
	// 	Bureaucrat	bur("bur", 3);
	// 	Form	*shrub = new ShrubberyCreationForm("home");	// 145, 137
	// 	Form	*robot = new RobotomyRequestForm("flower");	// 72, 45
	// 	Form	*presi = new PresidentialPardonForm("president");	// 25, 5


	// 	std::cout << *shrub << std::endl;
	// 	std::cout << std::endl;
	// 	bur.signForm(*shrub);
	// 	bur.executeForm(*shrub);
		
	// 	// bur.executeForm(*robot);
	// 	bur.signForm(*robot);
	// 	bur.executeForm(*robot);

	// 	bur.signForm(*presi);
	// 	bur.executeForm(*presi);
	// 	bur.signForm(*presi);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	try
	{
		Bureaucrat	b("boss", 1);
		Intern	i;

		// Form*	s = i.makeForm("ShrubberyCreation", "tree");
		Form*	s = i.makeForm("RobotomyRequest", "robot");
		// Form*	s = i.makeForm("PresidentialPardon", "good");

		b.signForm(*s);
		b.executeForm(*s);

		Form*	err = i.makeForm("aaaaaa", "tree");
		b.signForm(*err);
		b.executeForm(*err);
		
		// delete s;
		// delete err;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	
	return (0);
}