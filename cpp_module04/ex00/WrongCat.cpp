/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:06:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 21:41:32 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat Default Constructor Called!" << std::endl;
	this->setType("WrongCat");
	return;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal() {
	std::cout << "WrongCat Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs) {
	std::cout << "WrongCat Assignment operator called!" << std::endl;
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << this->getType() << " is Meowing!" << std::endl;
	return;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor Called!" << std::endl;
	return;
}
