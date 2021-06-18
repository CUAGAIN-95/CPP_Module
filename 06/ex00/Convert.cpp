/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:06:24 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 07:29:06 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(std::string const & _str)
	:	str(_str), isVaildStr(true)
{
	this->checkIsVaildStr();
	size_t	size = this->str.size();
	if (size == 1 && !std::isdigit(str[0]))
		d = static_cast<double>(str[0]);
	else
	{
		if (isVaildStr)
		{
			std::stringstream	ss;
			d = std::stod(str);
			ss << d;
			str = ss.str();
		}
	}
}

Convert::Convert( const Convert & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->str = rhs.getStr();
		this->isVaildStr = rhs.getIsVaildStr();
		this->d = rhs.getDouble();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Convert const & i )
{
	(void)o;
	i.disPlayChar();
	i.disPlayInt();
	i.disPlayFloat();
	i.disPlayDouble();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// MEMBER FUNCTION
void	Convert::checkIsVaildStr(void)
{
	size_t	size = str.size();

	if (size == 1 && !std::isdigit(str[0]))
		isVaildStr = true;
	else if (!str.compare("inf") || !str.compare("+inf") || !str.compare("-inf") || !str.compare("nan") || \
			!str.compare("inff") || !str.compare("+inff") || !str.compare("-inff") || !str.compare("nanf"))
		isVaildStr = true;
	else
	{
		isVaildStr = true;
		size_t	i = 0;
		if (i < size && (str[i] == '+' || str[i] == '-'))
			i++;
		while (i < size && std::isdigit(str[i]))
			i++;
		if (i < size && str[i] == '.')
		{
			i++;
			while (i < size && std::isdigit(str[i]))
				i++;
			if (str[i] == 'f' && i == size - 1)
				i++;
			else if (str[i] == 'e' || str[i] == 'E')
			{
				i++;
				if (str[i] == '+' || str[i] == '-')
					i++;
				while (i < size && std::isdigit(str[i]))
					i++;
				if (!(i < size))
				{
					d = std::stod(str);
					return ;
				}
			}
		}
		if (i < size)
			isVaildStr = false;
	}
}

// nan : not a number
void	Convert::disPlayChar(void) const
{
	std::cout << "char: ";
	if (d > 127 || !isVaildStr || std::isnan(d) || std::isinf(d))
		std::cout << "impossible" << std::endl;
	else
	{
		char	c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void	Convert::disPlayInt(void) const
{
	std::cout << "int: ";
	if (!isVaildStr || \
		std::isnan(d) || std::isinf(d) || \
		d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
	{
		int	i = static_cast<int>(d);
		std::cout << i << std::endl;
	}
}

void	Convert::disPlayFloat(void) const
{
	std::cout << "float: ";
	//float limits에 - 를 붙이면 최솟값
	if ((!isVaildStr || d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max()) && \
		!(std::isnan(d) || std::isinf(d)))
		std::cout << "impossible" << std::endl;
	else
	{
		float f = static_cast<float>(d);
		std::cout << f;
		size_t	i, j;
		for (i = 0; i < str.size() && str[i] != '.'; ++i)
			;
		for (j = 0; j < str.size() && str[j] != 'e' && str[j] != 'E'; ++j)
			;
		if (std::isnan(d) || std::isinf(d) || j < str.size() || (i < str.size() && d - static_cast<int>(d) != 0))
			std::cout << "f" << std::endl;
		else
			std::cout << ".0f" << std::endl;
	}
}

void	Convert::disPlayDouble(void) const
{
	std::cout << "double: ";
	if (!isVaildStr)
		std::cout << "impossible" << std::endl;
	else
	{
		size_t	i, j;
		for (i = 0; i < str.size() && str[i] != '.'; ++i)
			;
		for (j = 0; j < str.size() && str[j] != 'e' && str[j] != 'E'; ++j)
			;
		if (std::isnan(d) || std::isinf(d) || j < str.size() || (i < str.size() && d - static_cast<int>(d) != 0))
			std::cout << d << std::endl;
		else
			std::cout << d << ".0" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// GEETER
const std::string & Convert::getStr(void) const
{ return (this->str); }

bool	Convert::getIsVaildStr(void) const
{ return (this->isVaildStr); }

double	Convert::getDouble(void) const
{ return (this->d); }

/* ************************************************************************** */