/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 14:11:52 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "randomChump.hpp"
#include "newZombie.hpp"
#include "zombieHorde.hpp"

int	main(void)
{
	Zombie	z1;
	Zombie	*zs;
	
	z1.set_name("test");
	z1.annonce();
	randomChump("Monsieur");
	
	z1.~Zombie();
	zs = ZombieHorde(10, "toto");
	
	int	i = 0;
	while (i < 10)
	{
		zs[i].annonce();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		zs[i].~Zombie();
		i++;
	}
	delete[] zs;
	return (0);
}