/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:33:31 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:25:57 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	private:
		unsigned int		iq;

	public:
		Brain();
		~Brain();

		void	set_iq(unsigned int _iq);
		unsigned int get_iq(void) const;
		
		std::string		identify(void) const;
};

#endif