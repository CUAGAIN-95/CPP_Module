/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 01:11:47 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/05/29 04:06:50 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int			main(void)
{
	Phonebook		pb;
	
	Phonebook::title();
	pb.phonebook();
	return (0);
}