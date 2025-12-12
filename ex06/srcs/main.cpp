/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:49:30 by njooris           #+#    #+#             */
/*   Updated: 2025/12/12 11:51:04 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl h;
	
	if (ac < 2)
	{
		std::cout << "Need arguments\n./harlFilter <level>" << std::endl;
		return (1);
	}
	else if (ac > 2)
	{
		std::cout << "One argument please" << std::endl;
		return (1);
	}
	h.complain(av[1]);
	return (0);
}