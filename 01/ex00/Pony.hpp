/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:51:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 23:21:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Pony
{
	private:
		std::string	name;
		std::string	color;
		std::string	age;
		std::string	height;

	public:
		Pony();
		Pony(std::string _name, std::string _color, \
			std::string _age, std::string _height);
		~Pony();

		void	set_name(const std::string &_name);
		void	set_color(const std::string &_color);
		void	set_age(const std::string &_age);
		void	set_height(const std::string &_height);

		const std::string	&get_name(void) const;
		const std::string	&get_color(void) const;
		const std::string	&get_age(void) const;
		const std::string	&get_height(void) const;

		void	introduce(void);
};
