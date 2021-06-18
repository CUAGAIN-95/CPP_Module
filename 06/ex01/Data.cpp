/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 07:48:27 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 12:34:23 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::string *makeRandomStr(void)
{
	std::string *res = new std::string;

	std::string		alpha = 
		"abcdefghijklmnopqrstuvwxyz" \
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	count = alpha.size();
	
	res->push_back(alpha[rand() % count]);	// 최소 한 문자는 생성
	for (int i = 0; i < rand() % 23; i++)			// 랜덤 문자열
		res->push_back(alpha[rand() % count]);
	return res;
}

void	*serialize(void)
{
	Data	*raw = new Data;	// 포인터만 생성

	raw->str1 = makeRandomStr();
	raw->n = rand();
	raw->str2 = makeRandomStr();

	std::cout << "serialize" << std::endl;
	std::cout << "str1:\t" << *raw->str1 << std::endl;
	std::cout << "n:\t" << raw->n << std::endl;
	std::cout << "str2:\t" << *raw->str2 << std::endl;

	return (raw);
}

Data	*deserialize(void *raw)
{
	Data	*data = new Data;

	data = reinterpret_cast<Data*>(raw);
	return (data);
}

/* ************************************************************************** */