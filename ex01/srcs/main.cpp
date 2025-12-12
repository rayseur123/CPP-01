/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2025/12/12 11:24:05 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	for (int i = 10; i < 10; i++)
	{
		zs[i].annonce();
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		zs[i].~Zombie();
		i++;
	}
	delete[] zs;
	return (0);
}