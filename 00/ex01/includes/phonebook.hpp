/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:21:59 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 01:11:50 by yeonhlee         ###   ########.fr       */
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
				std::cout << "\tEnter a command (ADD or SEARCH or EXIT):" << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
				if (!input.compare("ADD") || !input.compare("add"))
					add();
				else if (!input.compare("SEARCH") || !input.compare("search"))
					search();
				else if (!input.compare("EXIT") || !input.compare("exit"))
					break ;
				else
				{
					std::cout << "\tINPUT DATA ERROR!!" << std::endl;
					std::cout << std::endl;
				}
			}
		}

		std::string	input_data(const std::string data_name)
		{
			std::string input_data;

			std::cout << std::setw(16) << data_name << " : ";
			std::getline(std::cin, input_data);
			return (input_data);
		}
		
		void	add(void)
		{
			if (count == 8)
				count = 0;
			std::cout << "\tEnter input data" << std::endl;
			contact[count].set_first_name(input_data("first_name"));
			contact[count].set_last_name(input_data("last_name"));
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
		
		void	print_data(std::string str)
		{
			if (str.size() < 10)
				std::cout << std::setw(10) << str << " | ";
			else
				std::cout << str.substr(0, 9) << "." << " | ";
		}

		void	index_list(int i)
		{
			std::cout << std::setw(10) << i << " | ";
			print_data(contact[i].get_first_name());
			print_data(contact[i].get_last_name());
			print_data(contact[i].get_nickname());
			std::cout << std::endl;
		}

		void	print_data_list(int i)
		{
			std::cout << std::setw(16) << "first_name" << " : " << contact[i].get_first_name() << std::endl;
			std::cout << std::setw(16) << "last_name" << " : " << contact[i].get_last_name() << std::endl;
			std::cout << std::setw(16) << "nickname" << " : " << contact[i].get_nickname() << std::endl;
			std::cout << std::setw(16) << "login" << " : " << contact[i].get_login() << std::endl;
			std::cout << std::setw(16) << "postal_address" << " : " << contact[i].get_postal_address() << std::endl;
			std::cout << std::setw(16) << "email_address" << " : " << contact[i].get_email_address() << std::endl;
			std::cout << std::setw(16) << "phone_number" << " : " << contact[i].get_phone_number() << std::endl;
			std::cout << std::setw(16) << "birthday_date" << " : " << contact[i].get_birthday_date() << std::endl;
			std::cout << std::setw(16) << "favorite_meal" << " : " << contact[i].get_favorite_meal() << std::endl;
			std::cout << std::setw(16) << "underwear_color" << " : " << contact[i].get_underwear_color() << std::endl;
			std::cout << std::setw(16) << "darkest_secret" << " : " << contact[i].get_darkest_secret() << std::endl;
			std::cout << std::endl;
		}

		bool	check_input(std::string input, int i)
		{ 
			if (i == 0)
			{
				if (input.size() != 1)
					return (false);
				if (input.compare("0"))
					return (false);
			}
			else if (!(0 <= i && i <= 7))
				return (false);
			else if (contact[i].get_empty())
				return (false);
			return (true);
		}

		void	search()
		{
			int			i;
			std::string	input;
		
			if (contact[0].get_empty())
			{
				std::cout << "\tPhonebook don't have data. Please add data!" << std::endl;
				return ;
			}
			while (1)
			{
				i = 0;
				std::cout << "     index" << " | " << "first_name" << " | " << " last_name" << " | " << "  nickname" << " | " << std::endl;
				while (!contact[i].get_empty() && i < 8)
				{
					index_list(i);
					i++;
				}
				std::cout << "\tEnter index : ";
				std::getline(std::cin, input);
				if (!input.compare("EXIT") || !input.compare("exit"))
					break ;
				i = atoi(input.c_str());
				if (!check_input(input, i))
					std::cout << "\tWrong index!!!" << std::endl << std::endl;
				else
				{
					print_data_list(i);
					break ;
				}
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