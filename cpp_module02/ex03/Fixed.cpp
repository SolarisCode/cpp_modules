/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:09:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/19 16:19:30 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNum(0) {
	return;
}

Fixed::Fixed(int const intNum) {
	this->setRawBits(intNum << Fixed::fractionalBits);
	return;
}

Fixed::Fixed(float const floatNum) {
	float	bias;

	bias = floatNum > 0 ? 0.5: -0.5;
	this->setRawBits(floatNum * (float)(1 << Fixed::fractionalBits) + bias);
	return;
}

Fixed::Fixed(Fixed const& src) {
	*this = src;
	return;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
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
	return (this->getRawBits() >> Fixed::fractionalBits);
}

float	Fixed::toFloat(void) const{
	return ((float)this->getRawBits() / (float)(1 << Fixed::fractionalBits));
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
	Fixed	newFixed;
	newFixed.setRawBits((this->getRawBits() * other.getRawBits()) >> (Fixed::fractionalBits));
	return (newFixed);
}

Fixed	Fixed::operator/(Fixed const& other) const {
	Fixed newFixed;
	newFixed.setRawBits((this->getRawBits() << Fixed::fractionalBits) / other.getRawBits());
	return (newFixed);
}

Fixed&	Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed oldFixed(*this);
	++(*this);
	return(oldFixed);
}

Fixed&	Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed oldFixed(*this);
	--(*this);
	return (oldFixed);
}

Fixed&	Fixed::min(Fixed& fixedOne, Fixed& fixedSecond) {
	return fixedOne < fixedSecond ? fixedOne: fixedSecond;
}

Fixed const&	Fixed::min(Fixed const& fixedOne, Fixed const& fixedSecond) {
	return (fixedOne < fixedSecond ? fixedOne: fixedSecond);
}

Fixed&	Fixed::max(Fixed& fixedOne, Fixed& fixedSecond) {
	return (fixedOne > fixedSecond ? fixedOne: fixedSecond);
}

Fixed const&	Fixed::max(Fixed const& fixedOne, Fixed const& fixedSecond) {
	return (fixedSecond > fixedSecond ? fixedOne: fixedSecond);
}

Fixed::~Fixed(void) {
	return;
}

std::ostream&	operator<<(std::ostream& OST, Fixed const& fixedPoint) {
	OST << fixedPoint.toFloat();
	return (OST);
}
