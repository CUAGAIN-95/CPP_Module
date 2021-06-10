/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:13:52 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 18:07:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>	//std::rand()
#include <ctime>	//std::time()
#include <string>	//std::to_string()

class ZombieEvent
{
	private:
		std::string		type;
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string _type);
		Zombie*	newZombie(std::string _name);
		Zombie*	randomChump(void);
};
