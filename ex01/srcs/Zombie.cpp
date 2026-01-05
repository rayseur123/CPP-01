/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:29:35 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 13:08:45 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name + " Zombie deleted." << std::endl;
	return ;
}

void	Zombie::annonce(void) const
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	this->_name = name;
}