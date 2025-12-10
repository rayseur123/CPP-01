/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:44:14 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 16:58:06 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	private:
		std::string	name;
		Weapon		*w;
	public:
		HumanB(void);
		HumanB(Weapon *type_weapon);
		void		attack(void);
		Weapon		*getWeapon(void);
		void		setWeapon(Weapon *weapon);
		std::string	getName(void);
		void		setName(std::string name);
};
