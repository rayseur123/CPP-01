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

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void		HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << "attacks with their " << _weapon->getType() << std::endl;
}

Weapon		*HumanB::getWeapon(void)
{
	return (_weapon);
}

void		HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

std::string	HumanB::getName()
{
	return (_name);
}

void		HumanB::setName(std::string name)
{
	_name = name;
}
