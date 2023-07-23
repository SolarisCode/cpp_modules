/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:56:03 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 01:48:11 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) : AMateria("Cure") {
	std::cout << "Cure Default Constructor Called!" << std::endl;
	return;
}

Cure::Cure(Cure const& src) {
	std::cout << "Cure copy Constructor Called!" << std::endl;
	this->setType(src.getType());
	return;
}

Cure&	Cure::operator=(Cure const& rhs) {
	std::cout << "Cure Assignment operator Called!" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return (*this);
}

Cure*	Cure::clone(void) const {
	Cure*	cloneCure = new Cure(*this);
	return (cloneCure);
}

void	Cure::use(ICharacter& terget) {
	std::cout << "* heals <name>’s wounds *" << std::endl;
	return;
}

Cure::~Cure(void) {
	std::cout << "Cure Destructor Called!" <<  std::endl;
	return;
}
