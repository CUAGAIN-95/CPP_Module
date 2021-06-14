/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:06:37 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 20:57:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string		name;
		
		Victim();

	public:
		Victim(std::string _name);
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );

		// GETTER
		const std::string	&getName(void) const;

		// SETTER
		void	setName(const std::string &_name);

		// MEMBER FUNCTION

		/*
		** virtual을 추가함으로써
		** 자녀 클래스에서 같은 이름의 함수를 선언하면 자녀의 함수가 적용이 됨
		*/
		virtual void	getPolymorphed(void) const;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */