/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:46 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/06 22:53:06 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
typedef std::string String;

class HumanA {
private:
	String	_name;
	Weapon	_weapon;
public:
	HumanA(void);
	HumanA(String name, Weapon& weapon);
	HumanA(HumanA const& src);
	HumanA&	operator=(HumanA const& rhs);
	String const&	getName(void) const;
	Weapon&	getWeapon(void) const;
	void	attack(void) const;
	~HumanA(void);
};
