/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:27:05 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/26 22:53:15 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
typedef std::string String;

HumanB::HumanB(void) {
	std::cout << "Default Constructor called!" << std::endl;
	return;
}

HumanB::HumanB(String name) : _name(name), _weapon(NULL) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

HumanB::HumanB(HumanB const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

HumanB&	HumanB::operator=(HumanB const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
		*(this->_weapon) = rhs.getWeapon();
	}
	return (*this);
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
	return;
}

String	HumanB::getName(void) const {
	return (this->_name);
}

Weapon	HumanB::getWeapon(void) const {
	return (*this->_weapon);
}

void	HumanB::attack(void) const {
	if (!this->_weapon) {
		std::cout << "Attacking with bare hands!" << std::endl;
	}
	else
		std::cout << this->_name << " attacks with their " << *this->_weapon << std::endl;
	return;
}

HumanB::~HumanB(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, HumanB const& humanB) {
	OST << "Human Name: " << humanB.getName() << std::endl;
	OST << "Human Weapon: " << humanB.getWeapon() << std::endl;
	return (OST);
}
