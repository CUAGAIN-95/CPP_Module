/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:29:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 22:53:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	private:
		Brain::Brain	brain;
		
	public:
		Human();
		~Human();
		
		std::string		identify(void);
		Brain::Brain	getBrain(void);
};

#endif