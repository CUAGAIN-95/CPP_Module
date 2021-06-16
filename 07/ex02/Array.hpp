/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 03:47:26 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 05:32:13 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array
{
	private:
		T	*arr;
		unsigned int	_size;

	public:
		Array() : arr(new T[0]), _size(0) {}
		Array(unsigned int n) : arr(new T[n]), _size(n)
		{
			for (unsigned int i = 0; i < n; i++)
			{
				T	*tmp = arr + i;
				tmp = new T();
			}
		}
		Array( const Array & src)
		{
			*this = src;
		}

		Array & operator=(const Array & src)
		{
			if (this != &src)
			{
				this->_size = src.size();
				arr = new T[src.size()];
				for (unsigned int i = 0; i < src.size(); i++)
					arr[i] = src[i];
			}
			return (*this);
		}

		T &	operator[](unsigned int i)
		{
			if (i >= this->size())
				throw std::out_of_range("out_of_range");
			return (arr[i]);
		}

		// MEMBER FUNCTION
		unsigned int	size(void) const
		{
			return (this->_size);
		}
};