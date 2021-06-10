/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:47:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:22:27 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));	//랜덤 시드 설정 (시간을 기준)

	ZombieHorde	horde(4);

	horde.announce();

	// error case

	ZombieHorde	errorhorde(-1);

	errorhorde.announce();
	return (0);
}