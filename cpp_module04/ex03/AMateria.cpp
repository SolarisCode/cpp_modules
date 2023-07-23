/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:59:39 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 23:12:52 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <algorithm>
#include <string>

AMateria::AMateria(void){
	std::cout << "AMateria Default Constructor Called!" << std::endl;
	return;
}

AMateria::AMateria(std::string const& type) : _type(type) {
	std::cout << "AMateria Parametric Constructor Called!" << std::endl;
	return;
}

AMateria::AMateria(AMateria const& src) {
	std::cout << "AMateria copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

AMateria&	AMateria::operator=(AMateria const& rhs) {
	std::cout << "AMateria Assignment operator Called!" << std::endl;
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

void	AMateria::use(ICharacter& terget) {

}

AMateria::~AMateria(void) {
	std::cout << "AMateria Destructor Called!" <<  std::endl;
	return;
}
