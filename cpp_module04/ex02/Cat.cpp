/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:06:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 21:38:10 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "IAnimal.hpp"

Cat::Cat(void) : _brain(new Brain()) {
	std::cout << "Cat Default Constructor Called!" << std::endl;
	this->setType("Cat");
	return;
}

Cat::Cat(Cat const& src) : _brain(new Brain()) {
	std::cout << "Cat Copy Constructor Called!" << std::endl;
	this->setType(src.getType());
	this->_brain->setIdeas(src.getBrain()->getIdeas());
	return;
}

Cat&	Cat::operator=(Cat const& rhs) {
	std::cout << "Cat Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->_brain->setIdeas(rhs.getBrain()->getIdeas());
	}
	return (*this);
}

std::string	Cat::getType(void) const {
	return (this->_type);
}

void	Cat::setType(std::string type) {
	this->_type = type;
	return;
}

void	Cat::makeSound(void) const {
	std::cout << this->getType() << " is Meowing!" << std::endl;
	return;
}

void	Cat::setBrain(Brain* newBrain) {
	this->_brain = newBrain;
	return;
}

Brain*	Cat::getBrain(void) const {
	return (this->_brain);
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor Called!" << std::endl;
	delete this->_brain;
	return;
}
