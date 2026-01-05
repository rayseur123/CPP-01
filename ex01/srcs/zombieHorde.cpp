/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:41:19 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 13:09:59 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie	*ZombieHorde(const int &N, const std::string &name)
{
	Zombie *z;

	if (N < 0)
		return (NULL);
	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name);
	}
	return (z);
}