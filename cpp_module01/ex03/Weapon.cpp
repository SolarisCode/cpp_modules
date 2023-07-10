/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:56 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 18:13:29 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "Defualt Constructor called!" << std::endl;
	return;
}

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

Weapon::Weapon(Weapon const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

Weapon&	Weapon::operator=(Weapon const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return;
}

std::string Weapon::getType(void) const {
	return (this->_type);
}

Weapon::~Weapon(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, Weapon const& weapon) {
	OST << weapon.getType();
	return (OST);
}
