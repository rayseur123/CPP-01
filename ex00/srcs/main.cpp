/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 10:32:40 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1;
	Zombie	*z2;

	z2 = newZombie("Nicolas");
	z1.set_name("Devan");
	z2->annonce();
	z1.annonce();
	randomChump("Nikandr");
	delete z2;
	return (0);
}