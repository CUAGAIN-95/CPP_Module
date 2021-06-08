/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:33:31 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 22:53:46 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		unsigned int		iq;
		unsigned int		eq;

	public:
		Brain();
		~Brain();

		void	set_iq(int _iq);
		void	set_left_brain();
		void	set_right_brain();
		std::string		identify(void);
};

#endif