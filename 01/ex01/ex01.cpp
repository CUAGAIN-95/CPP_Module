/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:00:44 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/02 00:06:52 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
	std::string*	panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
	return (0);
}