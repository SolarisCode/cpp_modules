/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:56:03 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 01:42:10 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) : AMateria("Ice") {
	std::cout << "Ice Default Constructor Called!" << std::endl;
	return;
}

// Ice::Ice(std::string const& type) : AMateria(type) {
// 	std::cout << "Ice Parametric Constructor Called!" << std::endl;
// 	return;
// }

Ice::Ice(Ice const& src) {
	std::cout << "Ice copy Constructor Called!" << std::endl;
	this->setType(src.getType());
	return;
}

Ice&	Ice::operator=(Ice const& rhs) {
	std::cout << "Ice Assignment operator Called!" << std::endl;
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return (*this);
}

Ice*	Ice::clone(void) const {
	Ice*	cloneIce = new Ice(*this);
	return (cloneIce);
}

void	Ice::use(ICharacter& terget) {
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
	return;
}

Ice::~Ice(void) {
	std::cout << "Ice Destructor Called!" <<  std::endl;
	return;
}
