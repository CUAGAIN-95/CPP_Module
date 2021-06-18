/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 07:48:26 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 12:34:26 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <cstdlib>

struct Data
{
	std::string		*str1;
	int				n;
	std::string		*str2;
};

std::string	*makeRandomStr(void);
void	*serialize(void);
Data	*deserialize(void *raw);

#endif /* ************************************************************ DATA_H */