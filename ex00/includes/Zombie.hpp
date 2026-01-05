/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:21:09 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 13:07:51 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(const std::string &name);
		~Zombie(void);
		void		annonce(void) const;
		void		set_name(const std::string &name);
};

void	randomChump(const std::string &name);
Zombie	*newZombie(const std::string &name);


#endif