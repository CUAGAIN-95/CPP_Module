/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:18:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 08:23:27 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(): empty(true) {}

Contact::~Contact() {}

void	Contact::set_first_name(const std::string &_first_name)
{ this->first_name = _first_name; }

void	Contact::set_last_name(const std::string &_last_name)
{ this->last_name = _last_name; }

void	Contact::set_nickname(const std::string &_nickname)
{ this->nickname = _nickname; }

void	Contact::set_login(const std::string &_login)
{ this->login = _login; }

void	Contact::set_postal_address(const std::string &_postal_address)
{ this->postal_address = _postal_address; }

void	Contact::set_email_address(const std::string &_email_address)
{ this->email_address = _email_address; }

void	Contact::set_phone_number(const std::string &_phone_number)
{ this->phone_number = _phone_number; }

void	Contact::set_birthday_date(const std::string &_birthday_date)
{ this->birthday_date = _birthday_date; }

void	Contact::set_favorite_meal(const std::string &_favorite_meal)
{ this->favorite_meal = _favorite_meal; }

void	Contact::set_underwear_color(const std::string &_underwear_color)
{ this->underwear_color = _underwear_color; }

void	Contact::set_darkest_secret(const std::string &_darkest_secret)
{ this->darkest_secret = _darkest_secret; }

void	Contact::set_empty(const bool &_empty)
{ this->empty = _empty; }

const std::string	&Contact::get_first_name(void) const
{ return (this->first_name); }

const std::string	&Contact::get_last_name(void) const
{ return (this->last_name); }

const std::string	&Contact::get_nickname(void) const
{ return (this->nickname); }

const std::string	&Contact::get_login(void) const
{ return (this->login); }

const std::string	&Contact::get_postal_address(void) const
{ return (this->postal_address); }

const std::string	&Contact::get_email_address(void) const
{ return (this->email_address); }

const std::string	&Contact::get_phone_number(void) const
{ return (this->phone_number); }

const std::string	&Contact::get_birthday_date(void) const
{ return (this->birthday_date); }

const std::string	&Contact::get_favorite_meal(void) const
{ return (this->favorite_meal); }

const std::string	&Contact::get_underwear_color(void) const
{ return (this->underwear_color); }

const std::string	&Contact::get_darkest_secret(void) const
{ return (this->darkest_secret); }

const bool			&Contact::get_empty(void) const
{ return (this->empty); }