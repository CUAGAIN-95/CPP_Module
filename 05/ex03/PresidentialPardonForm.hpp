/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:07:52 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/17 12:15:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const & _target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		// MEMBER FUNCTION
		virtual void	execute(Bureaucrat const & executer) const;
};

// std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */