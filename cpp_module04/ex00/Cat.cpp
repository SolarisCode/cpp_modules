/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:06:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:08:55 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) {
	std::cout << "Cat Default Constructor Called!" << std::endl;
	this->setType("Cat");
	return;
}

Cat::Cat(Cat const& src) : Animal() {
	std::cout << "Cat Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

Cat&	Cat::operator=(Cat const& rhs) {
	std::cout << "Cat Assignment operator called!" << std::endl;
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << this->getType() << " is Meowing!" << std::endl;
	return;
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor Called!" << std::endl;
	return;
}
