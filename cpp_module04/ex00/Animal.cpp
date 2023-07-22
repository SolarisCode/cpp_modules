/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:36:48 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 01:53:02 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal Default Constructor Called!" << std::endl;
	return;
}

Animal::Animal(Animal const& src) {
	std::cout << "Animal Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

Animal&	Animal::operator=(Animal const& rhs) {
	std::cout << "Animal Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setType(this->getType());
	}
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::setType(std::string type) {
	this->_type = type;
	return;
}

void	Animal::makeSound(void) const {
	std::cout << "Some Animal Sound!" << std::endl;
	return;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor Called!" << std::endl;
	return;
}
