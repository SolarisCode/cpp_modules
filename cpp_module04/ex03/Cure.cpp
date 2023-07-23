/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:56:03 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 19:57:19 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) : AMateria("cure") {
	return;
}

Cure::Cure(Cure const& src) : AMateria(src.getType()) {
	return;
}

Cure&	Cure::operator=(Cure const& rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return (*this);
}

Cure*	Cure::clone(void) const {
	Cure*	cloneCure = new Cure();
	return (cloneCure);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}

Cure::~Cure(void) {
	return;
}
