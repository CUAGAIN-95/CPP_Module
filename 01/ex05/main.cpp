/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:37:54 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 17:36:45 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	// 뇌의 주소값을 어떻게 출력해야하나
	Brain	brain;

	std::cout << brain.identify() << std::endl;

	// 사람을 만든 뒤 사람의 주소값과 뇌의 주소값이 일치하는지 확인
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	// 생성자 잘 생성되었는지 확인
	std::cout << bob.getBrain().get_iq() << std::endl;

	return (0);
}