/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:12:56 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 01:33:32 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

		Bureaucrat();

	public:
		Bureaucrat(std::string const &_name, int _grade);
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		// GETTER
		const std::string	&getName(void) const;
		int		getGrade(void) const;

		// MEMBER FUNCTION
		void	increment(void);	//등급을 올려줌 1이 최고 지점
		void	decrement(void);	//등급을 내려줌 150이 최저 지점

		void	signForm(Form &form);
		void	executeForm(Form const &form);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */