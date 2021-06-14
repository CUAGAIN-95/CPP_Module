/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:30:33 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 20:51:34 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

// # include <iostream>
// # include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();

	public:
		Peon(std::string _name);
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );
		
		// MEMBER FUNCTION
		void	getPolymorphed(void) const;

};

#endif /* ************************************************************ PEON_H */