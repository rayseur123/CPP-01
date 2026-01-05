/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:39:00 by njooris           #+#    #+#             */
/*   Updated: 2026/01/05 13:12:54 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(const std::string &type);
		~Weapon(void);
		std::string	getType(void) const;
		void setType(const std::string &str);
};
#endif