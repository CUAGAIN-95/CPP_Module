/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:20:37 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 17:28:04 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

#include <list>
#include <deque>
#include <vector>

int		main(void)
{
	try {
		Mutantstack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;
		std::cout << "------------" << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		Mutantstack<int>::iterator it = mstack.begin();
		Mutantstack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << ">> ";
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "------------" << std::endl;
		while (!mstack.empty())
			mstack.pop();
		mstack.push(10);
		mstack.push(20);
		mstack.push(30);

		Mutantstack<int> rstack(mstack);
		Mutantstack<int>::reverse_iterator rit = rstack.rbegin();
		Mutantstack<int>::reverse_iterator rite = rstack.rend();
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;	// reverse_iterator의 다음 요소로 증가
		}

		std::cout << "------------" << std::endl;
		while (!mstack.empty())
			mstack.pop();
		
		std::stack<int> s(mstack);	// check Mutantstack inherit stack
		
		// Mutantstack<int, std::list<int> > mlist;
		// mlist.push(3);
		// mlist.push(5);
		// Mutantstack<int, std::list<int> >::iterator it = mlist.begin();
		// Mutantstack<int, std::list<int> >::iterator ite = mlist.end();
		// while (it != ite)
		// {
		// 	std::cout << *it << std::endl;
		// 	++it;
		// }
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}