/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:25:27 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 17:20:23 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

// stack은 기본적으로 container에 deque가 들어간다.
// container 자리에는 백터 리스트 데큐를 올 수 있다.
// container는 stack을 표현하는 자료구조

// container에 백터를 넣으면 백터를 스택처럼 first in last out 으로 사용

template <class T, class Container = std::deque<T> >
class Mutantstack : public std::stack<T, Container >
{
	public:
		// stack에 있는 container의 iterator
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		Mutantstack(): std::stack<T, Container>() {}
		Mutantstack( Mutantstack<T, Container> const & src ): std::stack<T, Container>(src) {}
		virtual ~Mutantstack() {}

		Mutantstack<T, Container> &		operator=( Mutantstack<T, Container> const & rhs )
		{
			if ( this != &rhs )
				std::stack<T>::operator=(rhs);
			return *this;
		}

		// containers는 iteratorr가 구성되어있고 그것을 구현 
		// 상속받은 stack에 container타입의 c 맴버 변수의 함수를 사용
		iterator				begin(void) { return (std::stack<T, Container >::c.begin()); }
		iterator				end(void) { return (std::stack<T, Container >::c.end()); }
		reverse_iterator		rbegin(void) { return (std::stack<T, Container >::c.rbegin()); }
		reverse_iterator		rend(void) { return (std::stack<T, Container >::c.rend()); }
		
			// c++11
		// const_iterator			cbegin(void) const { return (std::stack<T, Container >::c.cbegin()); }
		// const_iterator			cend(void) const { return (std::stack<T, Container >::c.cend()); }
		// const_reverse_iterator	crbegin(void) const { return (std::stack<T, Container >::c.crbegin()); }
		// const_reverse_iterator	crend(void) const { return (std::stack<T, Container >::c.crend()); }
};

#endif /* ***************************************************** MUTANTSTACK_H */