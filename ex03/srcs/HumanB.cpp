/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:16:26 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 17:01:19 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	w = NULL;
}

HumanB::HumanB(Weapon *weapon)
{
	setWeapon(weapon);	
}

void		HumanB::attack()
{
	if (!getWeapon())
		std::cout << name << " attacks with their punch" << std::endl;
	else
		std::cout << name << " attacks with their " << getWeapon()->getType() << std::endl;
}

Weapon		*HumanB::getWeapon()
{
	return (w);
}

void		HumanB::setWeapon(Weapon *weapon)
{
	w = weapon;
}

std::string	HumanB::getName()
{
	return (name);
}

void		HumanB::setName(std::string name)
{
	this->name = name;
}
