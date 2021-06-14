/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorceror.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:10:48 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 20:51:37 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCEROR_HPP
# define SORCEROR_HPP

// # include <iostream>
// # include <string>
# include "Victim.hpp"

class Sorceror
{
	private:
		std::string		name;
		std::string		title;

		Sorceror();

	public:
		Sorceror(std::string _name, std::string _title);
		Sorceror( Sorceror const & src );
		~Sorceror();

		Sorceror &		operator=( Sorceror const & rhs );

		// GETTER
		const std::string	&getName(void) const;
		const std::string	&getTitle(void) const;

		// SETTER
		void	setName(const std::string &_name);
		void	setTitle(const std::string &_name);

		// MEMBER FUNCTION
		void	polymorph(Victim const &victim) const;
};

std::ostream &			operator<<( std::ostream & o, Sorceror const & i );

#endif /* ******************************************************** SORCEROR_H */