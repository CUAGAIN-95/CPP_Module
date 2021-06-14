/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:09:47 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 21:03:45 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorceror.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Visitor.hpp"

int		main(void)
{
	Sorceror	robert("Robert", "the Magnifent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Visitor		peter("Peter");

	std::cout << robert << jim << joe << peter;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(peter);
	return (0);
}