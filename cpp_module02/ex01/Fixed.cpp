/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:09:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 20:19:40 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const intNum) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const floatNum) {
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setRawBits(rhs.getRawBits());
	}
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNum);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointNum = raw;
}

int	Fixed::toInt(void) const {
	return 0;
}

float	Fixed::toFloat(void) const{
	return 0;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, Fixed const& fixedPoint) {
	OST << fixedPoint.toFloat();
	return (OST);
}
