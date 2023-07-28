/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:36:48 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 19:01:31 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IAnimal.hpp"
#include <iostream>

IAnimal::IAnimal(void) : _type("IAnimal") {
	std::cout << "IAnimal Default Constructor Called!" << std::endl;
	return;
}

IAnimal::IAnimal(IAnimal const& src) {
	std::cout << "IAnimal Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

IAnimal&	IAnimal::operator=(IAnimal const& rhs) {
	std::cout << "IAnimal Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(this->getType());
	}
	return (*this);
}

std::string	IAnimal::getType(void) const {
	return (this->_type);
}

void	IAnimal::setType(std::string type) {
	this->_type = type;
	return;
}

void	IAnimal::makeSound(void) const {
	std::cout << "Some IAnimal Sound!" << std::endl;
	return;
}

IAnimal::~IAnimal(void) {
	std::cout << "IAnimal Destructor Called!" << std::endl;
	return;
}
