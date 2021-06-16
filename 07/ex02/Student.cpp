/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 05:09:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 05:23:40 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Student::Student(const std::string &_name, int _num)
: name(_name), num(_num) {}
Student::Student( const Student & src )
: name(src.name), num(src.num) {}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
Student::~Student()
{
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Student &				Student::operator=( Student const & rhs )
{
	if ( this != &rhs )
	{
		num = rhs.getNum();
	}
	return *this;
}
std::ostream &			operator<<( std::ostream & o, Student const & i )
{
	o << "Name = " << i.getName() << ", Num = " << i.getNum();
	return o;
}
/*
** --------------------------------- METHODS ----------------------------------
*/
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string	&Student::getName(void) const { return (name); }
int			Student::getNum(void) const { return (num); }
/* ************************************************************************** */