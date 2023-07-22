/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:06:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 19:25:49 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog(void) : _brain(new Brain()) {
	std::cout << "Dog Default Constructor Called!" << std::endl;
	this->setType("Dog");
	return;
}

Dog::Dog(Dog const& src) : Animal(), _brain(new Brain()) {
	std::cout << "Dog Copy Constructor Called!" << std::endl;
	this->setType(src.getType());
	this->_brain->setIdeas(src.getBrain()->getIdeas());
	return;
}

Dog&	Dog::operator=(Dog const& rhs) {
	std::cout << "Dog Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->_brain->setIdeas(rhs.getBrain()->getIdeas());
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << this->getType() << " is Barking!" << std::endl;
	return;
}

void	Dog::setBrain(Brain* newBrain) {
	this->_brain = newBrain;
	return;
}

Brain*	Dog::getBrain(void) const {
	return (this->_brain);
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor Called!" << std::endl;
	delete this->_brain;
	return;
}
