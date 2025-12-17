/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:41:19 by njooris           #+#    #+#             */
/*   Updated: 2025/12/17 11:02:58 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie[N];

	if (N < 0)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name);
	}
	return (z);
}