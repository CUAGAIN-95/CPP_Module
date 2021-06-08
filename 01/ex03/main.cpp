/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:47:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 18:49:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde	horde(4);
	ZombieHorde	errorhorde(-1);

	std::srand(static_cast<unsigned int>(std::time(0)));	//랜덤 시드 설정 (시간을 기준)
	
	horde.announce();
	
	errorhorde.announce();

	return (0);
}