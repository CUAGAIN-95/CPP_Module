/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 05:10:16 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 12:43:26 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP
# include <iostream>
# include <string>
class Student
{
	private:
		const std::string	name;
		int					num;
		Student();

	public:
		Student(const std::string &_name, int _num);
		Student( Student const & src );
		~Student();
		Student &		operator=( Student const & rhs );
		const std::string	&getName(void) const;
		int					getNum(void) const;
};
std::ostream &			operator<<( std::ostream & o, Student const & i );
#endif /* ********************************************************* STUDENT_H */