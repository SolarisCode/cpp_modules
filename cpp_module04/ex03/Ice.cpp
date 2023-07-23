/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:56:03 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 19:57:41 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) : AMateria("ice") {
	return;
}

Ice::Ice(Ice const& src) : AMateria(src.getType()) {
	return;
}

Ice&	Ice::operator=(Ice const& rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return (*this);
}

Ice*	Ice::clone(void) const {
	Ice*	cloneIce = new Ice();
	return (cloneIce);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

Ice::~Ice(void) {
	return;
}
