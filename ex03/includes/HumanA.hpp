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

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA(void);

		void				attack(void) const;

		Weapon				getWeapon(void) const;
		void				setWeapon(Weapon &w);

		const std::string	&getName(void) const;
		void				setName(const std::string &name);
};

#endif