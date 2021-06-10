/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:29:10 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:28:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human() { this->brain = new Brain; }
Human::~Human() { delete brain; }

Brain &Human::getBrain(void)
{
	return (*this->brain);	
}

std::string		Human::identify(void)
{
	return (this->brain->identify());
}
