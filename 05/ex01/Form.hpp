/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:23:27 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/16 19:46:50 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const &name;
		bool	isSigned;
		const int		signGrade;
		const int		executeGrade;

		Form();
		
	public:
		Form(std::string const &_name, const int _sgin, const int _execute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		// GETTER
		const std::string	&getName(void) const;
		bool	getIsSigned(void) const;
		int		getSignGrade(void) const;
		int		getExecuteGrade(void) const;

		// MEMBER FUNCTION
		void	beSigned(Bureaucrat const &);

		// EXCEPTION
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */