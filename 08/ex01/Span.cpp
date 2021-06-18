/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:09:12 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 16:08:38 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int _maxSize)
	:	maxSize(_maxSize)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->vc = rhs.getVC();
		this->maxSize = rhs.getMaxSize();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Span::addNumber(int n)
{
	if (this->vc.size() == maxSize)
		throw Span::FullException();
	else if ((find(vc.begin(), vc.end(), n)) != vc.end())
		throw Span::DupNumException();
	else
		vc.push_back(n);
}

int		Span::shortestSpan(void) const
{
	if (vc.size() == 0 || vc.size() == 1)
		throw Span::NoSpanException();
	std::vector<int> sort_vc(vc);

	// 오름차순으로 정렬
	std::sort(sort_vc.begin(), sort_vc.end());
	// abs 란 절댓값
	int		shortest = abs(sort_vc[0] - sort_vc[1]);
	for (size_t i = 2; i < (sort_vc.size() - 1); i++)
	{
		if (shortest == (abs(sort_vc[i] - sort_vc[i + 1])))
			shortest = (abs(sort_vc[i] - sort_vc[i + 1]));
	}
	return (shortest);
}

int		Span::longestSpan(void) const
{
	if (vc.size() == 0 || vc.size() == 1)
		throw Span::NoSpanException();
	std::vector<int> sort_vc(vc);

	// 오름차순으로 정렬
	std::sort(sort_vc.begin(), sort_vc.end());
	return (abs(sort_vc[0] - sort_vc[sort_vc.size() - 1]));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GETTER
const std::vector<int>	&Span::getVC(void) const
{ return (this->vc); }

unsigned int		Span::getMaxSize(void) const
{ return (this->maxSize); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char const *Span::FullException::what(void) const throw()
{
	return ("Span is full!");
}

char const *Span::DupNumException::what(void) const throw()
{
	return ("Add num is duplicated!");
}

char const *Span::NoSpanException::what(void) const throw()
{
	return ("There is no Span!");
}

/* ************************************************************************** */