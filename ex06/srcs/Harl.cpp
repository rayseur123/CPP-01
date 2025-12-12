/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:31:32 by njooris           #+#    #+#             */
/*   Updated: 2025/12/12 11:55:32 by njooris          ###   ########.fr       */
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
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my"; 
		std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
		std::cout << "I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!\n" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming for years, whereas you started working here";
	std::cout << " just last month.\n"  << std::endl;;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	none
};

void	Harl::complain(std::string level)
{
	std::string	tabstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	while (tabstr[i] != level && i < 4)
		i++;
	switch (i)
	{
		case none:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
	}
}