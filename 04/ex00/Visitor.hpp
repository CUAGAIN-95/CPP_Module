/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visitor.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:58:40 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/14 21:04:30 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISITOR_HPP
# define VISITOR_HPP

# include "Victim.hpp"
class Visitor : public Victim
{
	private:
		Visitor();

	public:
		Visitor(std::string _name);
		Visitor( Visitor const & src );
		~Visitor();

		Visitor &		operator=( Visitor const & rhs );

		// MEMBER FUNCTION
		void	getPolymorphed(void) const;
};

// std::ostream &			operator<<( std::ostream & o, Visitor const & i );

#endif /* ********************************************************* VISITOR_H */