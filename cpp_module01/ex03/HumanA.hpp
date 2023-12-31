/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:46 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 18:44:28 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"
typedef std::string String;

class HumanA {
private:
	String	_name;
	Weapon&	_weapon;
public:
	HumanA(String name, Weapon& weapon);
	HumanA(HumanA const& src);
	HumanA&	operator=(HumanA const& rhs);
	String	getName(void) const;
	Weapon&	getWeapon(void) const;
	void	attack(void) const;
	~HumanA(void);
};

std::ostream&	operator<<(std::ostream& OST, HumanA const& humanA);
