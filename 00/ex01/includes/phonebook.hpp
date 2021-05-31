/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:21:59 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 08:28:09 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class	Phonebook
{
	private:
		Contact		contact[8];
		int			count;

	public:
		Phonebook();
		~Phonebook();

		void		phonebook(void);
		std::string	input_data(const std::string data_name);
		void		add(void);
		void		print_data(std::string str);
		void		index_list(int i);
		void		print_data_list(int i);
		bool		check_input(std::string input, int i);
		void		search(void);
		static void	title(void);
};

#endif