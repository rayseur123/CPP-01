/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:41:19 by njooris           #+#    #+#             */
/*   Updated: 2025/12/10 12:29:27 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	int	i = 0;
	Zombie *z = new Zombie[N];

	while (i < N)
	{
		z[i].set_name(name);
		i++;
	}
	return (z);
}