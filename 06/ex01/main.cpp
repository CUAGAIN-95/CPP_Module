/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:48:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 12:36:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Data.hpp"

// typedef struct {
// 	std::string str1;	// 24byte
// 	int			num;	// 4byte
// 	std::string str2;	// 24byte
// }		data;	// 52byte

// void *serialize(void)
// {
// 	data *d = new data;

// 	d->str1 = ;
// 	d->num = ;
// 	d->str2 = ;

// }

// ==============================
// reinterpret_cast
// 1. 포인터와 비포인터 간의 형 변환
// 2. 참조 타입이 다른 포인터 간의 형 변환
// ==============================

int main(void)
{
	// std::string str1 = "hello";
	// std::string str2 = "helloworld!!!";
	// std::cout << sizeof(str1) << std::endl;
	// std::cout << sizeof(str2) << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));	//랜덤 시드 설정 (시간을 기준)

	void	*raw = serialize();
	std::cout << std::endl;

	Data	*data = deserialize(raw);

	std::cout << std::endl;
	std::cout << "deserialize" << std::endl;
	std::cout << "s1:\t" << *data->str1 << std::endl;
	std::cout << "n:\t" << data->n << std::endl;
	std::cout << "s2:\t" << *data->str2 << std::endl;
	
	delete data->str1;
	delete data->str2;
	delete data;
	return (0);
}