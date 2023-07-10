/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:17:41 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 17:40:54 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"
typedef std::string String;

class	HumanB {
private:
	String	_name;
	Weapon*	_weapon;
public:
	HumanB(void);
	HumanB(String name);
	HumanB(HumanB const& src);
	HumanB&	operator=(HumanB const& rhs);
	void	setWeapon(Weapon& weapon);
	String	getName(void) const;
	Weapon	getWeapon(void) const;
	void	attack(void) const;
	~HumanB(void);
};

std::ostream&	operator<<(std::ostream& OST, Weapon const& HumanB);
