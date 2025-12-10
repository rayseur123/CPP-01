/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:16:26 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 17:00:01 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA()
{
	w.setType("Gun");
}

HumanA::HumanA(Weapon &weapon)
{
	setWeapon(weapon);	
}

void		HumanA::attack()
{
	std::cout << name << " attacks with their " << getWeapon().getType() << std::endl;
}

Weapon		HumanA::getWeapon()
{
	return (w);
}

void		HumanA::setWeapon(Weapon &weapon)
{
	w = weapon;
}

std::string	HumanA::getName()
{
	return (name);
}

void		HumanA::setName(std::string name)
{
	this->name = name;
}
