/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:51:33 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 23:44:59 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() { std::cout << "default constructor" << std::endl; }
Pony::Pony(std::string _name, std::string _color, std::string _age, std::string _height)
	: name(_name), color(_color), age(_age), height(_height)
{ std::cout << "Make Pony" << std::endl; }
Pony::~Pony() { std::cout << "Pony is died." << std::endl; }

void	Pony::set_name(const std::string &_name)
{ this->name = _name; }
void	Pony::set_color(const std::string &_color)
{ this->color = _color; }
void	Pony::set_age(const std::string &_age)
{ this->age = _age; }
void	Pony::set_height(const std::string &_height)
{ this->height = _height; }

const std::string	&Pony::get_name(void) const
{ return (this->name); }
const std::string	&Pony::get_color(void) const
{ return (this->color); }
const std::string	&Pony::get_age(void) const
{ return (this->age); }
const std::string	&Pony::get_height(void) const
{ return (this->height); }

void	Pony::introduce(void)
{
	std::cout << "Hi my name is " << this->get_name() << "!!" << std::endl;
	std::cout << "My color is " << this->get_color() << "!!" << std::endl;
	std::cout << "My age is " << this->get_age() << "!!" << std::endl;
	std::cout << "My height is " << this->get_height() << "!!" << std::endl;
}