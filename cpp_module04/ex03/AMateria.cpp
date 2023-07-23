/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:59:39 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 20:04:33 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <algorithm>
#include <string>

AMateria::AMateria(void){
	return;
}

AMateria::AMateria(std::string const& type) : _type(type) {
	return;
}

AMateria::AMateria(AMateria const& src) {
	*this = src;
	return;
}

AMateria&	AMateria::operator=(AMateria const& rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
	}
	return (*this);
}

std::string	const& AMateria::getType(void) const {
	return (this->_type);
}

void	AMateria::setType(std::string const& type) {
	this->_type = type;
	return;
}
void	AMateria::use(ICharacter& target) {
	std::cout << "Default output of: " << target.getName() << std::endl;
}

AMateria::~AMateria(void) {
	return;
}
