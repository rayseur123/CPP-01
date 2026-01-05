/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:41:50 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 13:22:04 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &str)
{
	this->type = str;
}
