/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 13:38:53 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "randomChump.hpp"
#include "newZombie.hpp"

int	main(void)
{
	Zombie	z1;

	z1.set_name("test");
	z1.annonce();
	randomChump("Monsieur");
	
	z1.~Zombie();
	return (0);
}