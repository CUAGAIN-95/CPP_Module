/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 00:48:45 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:13:13 by yeonhlee         ###   ########.fr       */
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

		void	set_zombie_num(int _num);

		int		get_zombie_num(void) const;
		void	announce(void);
};
