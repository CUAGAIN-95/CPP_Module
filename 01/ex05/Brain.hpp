/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:33:31 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/09 17:00:57 by yeonhlee         ###   ########.fr       */
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

		void	set_iq(const int &_iq);
		const unsigned int &get_iq(void) const;
		
		std::string		identify(void);
};

#endif