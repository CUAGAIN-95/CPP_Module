/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:52:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 19:06:42 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_p = &str;
	std::string &str_r = str;

	std::cout << *str_p << std::endl;
	std::cout << str_r << std::endl;
	
	return (0);
}