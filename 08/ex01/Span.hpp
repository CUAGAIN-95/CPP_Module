/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:09:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 23:34:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int>	vc;
		unsigned int	maxSize;
		
		Span();

	public:
		Span(unsigned int _maxSize);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		template <class InputIterator>		// vector::assign 기존에 있던 데이터 모두 지우고 다시 넣기
		void		addNumber(InputIterator first, InputIterator last) {
			vc.assign(first, last);
		};

		// GETTER
		const std::vector<int>	&getVC(void) const;
		unsigned int		getMaxSize(void) const;

		// MEMBER FUNCTION
		void	addNumber(int n);

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class FullException: public std::exception {
			virtual char const *what(void) const throw();	
		};

		class DupNumException: public std::exception {
			virtual char const *what(void) const throw();	
		};

		class NoSpanException: public std::exception {
			virtual char const *what(void) const throw();	
		};
};

#endif /* ************************************************************ SPAN_H */