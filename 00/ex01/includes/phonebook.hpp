/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:21:59 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/05/29 04:07:55 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class	Phonebook
{
	private:
		Contact		contact[8];
		int			count;

	public:
		Phonebook(): count(0) {}
		~Phonebook() {}
	
	// ===========
		void	print_count(void) const
		{ std::cout << "count : " << count << "<" << std::endl; }
	// ===========


		void		phonebook(void)
		{
			std::string		input;
			
			std::cout << "Enter a command (ADD or SEARCH or EXIT):" << std::endl;
			while (std::cin >> input)
			{
				if (!input.compare("ADD") || !input.compare("add"))
				{
					std::cout << "INPUT DATA = ADD!" << std::endl;
					add();
				}
				else if (!input.compare("SEARCH") || !input.compare("search"))
				{
					std::cout << "INPUT DATA = SEARCH!" << std::endl;
					search();
				}
				else if (!input.compare("EXIT") || !input.compare("exit"))
					break ;
				else
					std::cout << "INPUT DATA ERROR!!" << std::endl;
			}
		}
		
		void	add()
		{
			
		}
		
		void	search()
		{
			
		}
		static void	title(void)
		{
			std::cout << std::endl;
			std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
			std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
			std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
			std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
			std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
			std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
			std::cout << std::endl;
		}
};

#endif