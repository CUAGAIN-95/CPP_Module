/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:48:45 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/08 17:24:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie	*zombies;
		int		zombie_num;
		
	public:
		ZombieHorde();
		ZombieHorde(int _num);
		~ZombieHorde();

		void	set_zombie_num(const int &_num);

		const int	&get_zombie_num(void) const;
		void	announce(void);
};
