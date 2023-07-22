/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:06:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:09:00 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) {
	std::cout << "Dog Default Constructor Called!" << std::endl;
	this->setType("Dog");
	return;
}

Dog::Dog(Dog const& src) : Animal() {
	std::cout << "Dog Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

Dog&	Dog::operator=(Dog const& rhs) {
	std::cout << "Dog Assignment operator called!" << std::endl;
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << this->getType() << " is Barking!" << std::endl;
	return;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor Called!" << std::endl;
	return;
}
