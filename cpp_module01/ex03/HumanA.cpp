/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:26 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 18:44:24 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
typedef std::string String;

HumanA::HumanA(String name, Weapon& weapon) : _name(name), _weapon(weapon) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

HumanA::HumanA(HumanA const& src) : _weapon(src.getWeapon()){
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

String	HumanA::getName(void) const {
	return (this->_name);
}

Weapon&	HumanA::getWeapon(void) const {
	return (this->_weapon);
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
	return;
}

HumanA::~HumanA(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, HumanA const& humanA) {
	OST << "Human Name: " << humanA.getName() << std::endl;
	OST << "Human Weapon: " << humanA.getWeapon() << std::endl;
	return (OST);
}
