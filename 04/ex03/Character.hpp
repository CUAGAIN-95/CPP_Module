/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:29:13 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/15 20:45:47 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string		name;
		AMateria*		inventory[4];

		void			zeroInventory(void);
		Character();

	public:
		Character(std::string const & _name);
		Character( Character const & src );
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		// GETTER
		virtual std::string const & getName() const;
		
		// MEMBER FUNCTION
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

};

#endif /* ******************************************************* CHARACTER_H */