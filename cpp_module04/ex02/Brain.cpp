/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:51:52 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 17:09:05 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain::Brain(void) {
	std::cout << "Brain Default Constructor Called!" <<  std::endl;
	return;
}

Brain::Brain(Brain const& src) {
	std::cout << "Brain Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

Brain&	Brain::operator=(Brain const& rhs) {
	std::cout << "Brain Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setIdeas(rhs.getIdeas());
	}
	return (*this);
}

const std::string* Brain::getIdeas(void) const {
	return (this->_ideas);
}

void	Brain::setIdeas(const std::string* newIdeas) {
	for (int index = 0; index < 100; index++) {
		this->_ideas[index] = newIdeas[index];
	}
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor Called!" << std::endl;
	return;
}
