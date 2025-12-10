/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2025/12/10 12:27:19 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1;

	z1.set_name("test");
	z1.annonce();
	randomChump("Monsieur");
	
	z1.~Zombie();
	return (0);
}