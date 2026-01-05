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

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void		HumanA::attack(void) const
{
	std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}

Weapon		HumanA::getWeapon(void) const
{
	return (_weapon);
}

void		HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

const std::string	&HumanA::getName(void) const
{
	return (_name);
}

void		HumanA::setName(const std::string &name)
{
	_name = name;
}
