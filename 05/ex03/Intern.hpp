/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 02:11:43 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 13:06:15 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		// MEMBER FUNCTION
		Form*	makeForm(std::string const & _name, std::string const & target);

		static Form*	createShrubberyCreationForm(std::string const &target);
		static Form*	createRobotomyRequestForm(std::string const &target);
		static Form*	createPresidentialPardonForm(std::string const &target);
		
		// EXCEPTION
		class NotFoundFormException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

// std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */