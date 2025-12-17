/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:31:32 by njooris           #+#    #+#             */
/*   Updated: 2025/12/15 15:12:36 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <map>
#include <iostream>

Harl::Harl(void)
{
	
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
		std::cout << "I love having extra bacon for my"; 
		std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
		std::cout << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!"  << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming for years, whereas you started working here";
	std::cout << " just last month.";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ftab[4]) (void) = {&Harl::debug, &Harl::info,
			&Harl::info, &Harl::error};
	std::string	tabstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (tabstr[i] == level)
		{
			(this->*ftab[i])();
			return ;
		}
	}
	std::cout << "Bad level" << std::endl;
}