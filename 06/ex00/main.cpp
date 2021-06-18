/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:39:55 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 21:02:49 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Argument num error!" << std::endl;
		return (0);
	}
	Convert		cv(argv[1]);
	std::cout << cv;
	return (0);
}
