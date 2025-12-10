/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:21:09 by njooris           #+#    #+#             */
/*   Updated: 2025/12/10 12:29:01 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void	annonce(void);
		void	set_name(std::string name);
};

Zombie	*newZombie(std::string name);
Zombie	*ZombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif