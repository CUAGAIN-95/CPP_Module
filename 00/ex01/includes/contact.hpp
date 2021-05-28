/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:22:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/05/29 04:07:12 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	Contact
{
	private:
		std::string		first_name;
		std::string		second_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
	
	public:
		Contact() {}
		~Contact() {}
		
		void	set_first_name(const std::string &_first_name)
		{ this->first_name = _first_name; }
		void	set_second_name(const std::string &_second_name)
		{ this->second_name = _second_name; }
		void	set_nickname(const std::string &_nickname)
		{ this->nickname = _nickname; }
		void	set_login(const std::string &_login)
		{ this->login = _login; }
		void	set_postal_address(const std::string &_postal_address)
		{ this->postal_address = _postal_address; }
		void	set_email_address(const std::string &_email_address)
		{ this->email_address = _email_address; }
		void	set_phone_number(const std::string &_phone_number)
		{ this->phone_number = _phone_number; }
		void	set_birthday_date(const std::string &_birthday_date)
		{ this->birthday_date = _birthday_date; }
		void	set_favorite_meal(const std::string &_favorite_meal)
		{ this->favorite_meal = _favorite_meal; }
		void	set_underwear_color(const std::string &_underwear_color)
		{ this->underwear_color = _underwear_color; }
		void	set_darkest_secret(const std::string &_darkest_secret)
		{ this->darkest_secret = _darkest_secret; }
		
		const std::string	&get_first_name(void) const
		{ return (this->first_name); }
		const std::string	&get_second_name(void) const
		{ return (this->second_name); }
		const std::string	&get_nickname(void) const
		{ return (this->nickname); }
		const std::string	&get_login(void) const
		{ return (this->login); }
		const std::string	&get_postal_address(void) const
		{ return (this->postal_address); }
		const std::string	&get_email_address(void) const
		{ return (this->email_address); }
		const std::string	&get_phone_number(void) const
		{ return (this->phone_number); }
		const std::string	&get_birthday_date(void) const
		{ return (this->birthday_date); }
		const std::string	&get_favorite_meal(void) const
		{ return (this->favorite_meal); }
		const std::string	&get_underwear_color(void) const
		{ return (this->underwear_color); }
		const std::string	&get_darkest_secret(void) const
		{ return (this->darkest_secret); }
};

#endif
