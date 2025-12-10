/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:44:14 by njooris           #+#    #+#             */
/*   Updated: 2025/12/09 16:59:58 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	private:
		std::string	name;
		Weapon		w;
	public:
		HumanA(void);
		HumanA(Weapon &type_weapon);
		void		attack(void);
		Weapon		getWeapon(void);
		void		setWeapon(Weapon &weapon);
		std::string	getName(void);
		void		setName(std::string name);
};
