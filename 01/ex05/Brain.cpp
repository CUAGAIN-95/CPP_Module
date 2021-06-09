/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:37:57 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 17:49:48 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): iq(125) {}
Brain::~Brain() {}

void	Brain::set_iq(const int &_iq)
{ this->iq = _iq; }

const unsigned int &Brain::get_iq(void) const
{ return (this->iq); }

std::string	Brain::identify(void)
{
	std::stringstream		ss;
	unsigned long adr = (long) this;
	// ss 일시적으로 저장하는 공간
	// ss << this;
	ss << "0x" << std::uppercase << std::hex << adr;
	// test 용
	// std::cout << "class 주소값 : \t\t\t\t" << this << std::endl;
	// std::cout << "stringstream에 저장 후 ss 출력값\t" << ss.str() << std::endl;

	// str() 함수를 사용하여 ss에 저장되어 있는 주소값을 문자열로 리턴
	return (ss.str());
}