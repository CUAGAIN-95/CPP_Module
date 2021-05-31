/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:22:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 08:47:22 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class	Contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
		bool			empty;

	public:
		Contact();
		~Contact();
		
		void	set_first_name(const std::string &_first_name);
		void	set_last_name(const std::string &_last_name);
		void	set_nickname(const std::string &_nickname);
		void	set_login(const std::string &_login);
		void	set_postal_address(const std::string &_postal_address);
		void	set_email_address(const std::string &_email_address);
		void	set_phone_number(const std::string &_phone_number);
		void	set_birthday_date(const std::string &_birthday_date);
		void	set_favorite_meal(const std::string &_favorite_meal);
		void	set_underwear_color(const std::string &_underwear_color);
		void	set_darkest_secret(const std::string &_darkest_secret);
		void	set_empty(const bool &_empty);


		const std::string	&get_first_name(void) const;
		const std::string	&get_last_name(void) const;
		const std::string	&get_nickname(void) const;
		const std::string	&get_login(void) const;
		const std::string	&get_postal_address(void) const;
		const std::string	&get_email_address(void) const;
		const std::string	&get_phone_number(void) const;
		const std::string	&get_birthday_date(void) const;
		const std::string	&get_favorite_meal(void) const;
		const std::string	&get_underwear_color(void) const;
		const std::string	&get_darkest_secret(void) const;
		const bool			&get_empty(void) const;
};

#endif
