/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:09:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/19 01:28:19 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const intNum) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(intNum * (1 << Fixed::fractionalBits));
	return;
}

Fixed::Fixed(float const floatNum) {
	float	bias;

	bias = floatNum > 0 ? 0.5: -0.5;
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(floatNum * (1 << Fixed::fractionalBits) + bias);
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
	return (this->_fixedPointNum);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointNum = raw;
}

int	Fixed::toInt(void) const {
	return (this->getRawBits() / (1 << Fixed::fractionalBits));
}

float	Fixed::toFloat(void) const{
	return ((float)this->getRawBits() / (1 << Fixed::fractionalBits));
}

bool	Fixed::operator<(Fixed const& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>(Fixed const& other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<=(Fixed const& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>=(Fixed const& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator==(Fixed const& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const& other) const {
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& other) const {
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() + other.getRawBits());
	return (newFixed);
}

Fixed	Fixed::operator-(Fixed const& other) const {
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() - other.getRawBits());
	return (newFixed);
}

Fixed	Fixed::operator*(Fixed const& other) const {
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() * other.getRawBits());
	return (newFixed);
}

Fixed	Fixed::operator/(Fixed const& other) const {
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() / other.getRawBits());
	return (newFixed);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, Fixed const& fixedPoint) {
	OST << fixedPoint.toFloat();
	return (OST);
}
