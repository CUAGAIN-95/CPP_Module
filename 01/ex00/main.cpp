/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 08:51:36 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/01 23:51:45 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*pony_heap = new Pony("heap_pony", "red", "20", "150");

	pony_heap->introduce();
	delete pony_heap;
}

void	ponyOnTheStack(void)
{
	Pony	pony_stack = Pony("stack_pony", "blue", "30", "300");

	pony_stack.introduce();
}

int		main(void)
{
	std::cout << "\t+++ Pony On The Heap +++" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "\t+++ Pony On The Stack +++" << std::endl;
	ponyOnTheStack();
	return (0);
}