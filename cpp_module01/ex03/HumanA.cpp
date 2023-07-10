/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:26 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 15:12:04 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
typedef std::string String;

HumanA::HumanA(void) {
	std::cout << "Defualt Constructor called!" << std::endl;
	return;
}

HumanA::HumanA(String name, Weapon& weapon) : _name(name), _weapon(weapon) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

HumanA::HumanA(HumanA const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

HumanA&	HumanA::operator=(HumanA const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_weapon = rhs.getWeapon();
	}
	return (*this);
}

String const&	HumanA::getName(void) const {
	return (_name);
}
