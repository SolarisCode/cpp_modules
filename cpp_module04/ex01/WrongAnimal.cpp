/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:36:48 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:37:15 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal Default Constructor Called!" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
	std::cout << "WrongAnimal Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs) {
	std::cout << "WrongAnimal Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(this->getType());
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::setType(std::string type) {
	this->_type = type;
	return;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Some WrongAnimal Sound!" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor Called!" << std::endl;
	return;
}
