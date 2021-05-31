/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:22:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 00:10:28 by yeonhlee         ###   ########.fr       */
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
		Contact(): empty(true) {}
		~Contact() {}
		
		void	set_first_name(const std::string &_first_name)
		{ this->first_name = _first_name; }
		void	set_last_name(const std::string &_last_name)
		{ this->last_name = _last_name; }
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
		void	set_empty(const bool &_empty)
		{ this->empty = _empty; }


		const std::string	&get_first_name(void) const
		{ return (this->first_name); }
		const std::string	&get_last_name(void) const
		{ return (this->last_name); }
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
		const bool			&get_empty(void) const
		{ return (this->empty); }
};

#endif
