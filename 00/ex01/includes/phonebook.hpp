/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:21:59 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/05/29 05:16:39 by yeonhlee         ###   ########.fr       */
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
			
			
			while (true)
			{
				std::cout << "Enter a command (ADD or SEARCH or EXIT):" << std::endl;
				std::getline(std::cin, input);
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

		std::string	input_data(const std::string data_name)
		{
			std::string input_data;

			std::cout << data_name << " : ";
			std::getline(std::cin, input_data);
			return (input_data);
		}
		
		void	add(void)
		{
			if (count == 8)
				count = 0;
			contact[count].set_first_name(input_data("first_name"));
			contact[count].set_second_name(input_data("second_name"));
			contact[count].set_nickname(input_data("nickname"));
			contact[count].set_login(input_data("login"));
			contact[count].set_postal_address(input_data("postal_address"));
			contact[count].set_email_address(input_data("email_address"));
			contact[count].set_phone_number(input_data("phone_number"));
			contact[count].set_birthday_date(input_data("birthday_date"));
			contact[count].set_favorite_meal(input_data("favorite_meal"));
			contact[count].set_underwear_color(input_data("underwear_color"));
			contact[count].set_darkest_secret(input_data("darkest_secret"));
			contact[count].set_empty(false);
			count++;
		}
		
		void	output_data()
		{
			
		}

		void	search()
		{
			while (!contact[count].get_empty())
			{
				
				count++;
			}
			
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