/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:31:32 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 00:59:45 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0) {
	return;
}

Point::Point(float const x, float const y) : x(x), y(y) {
	return;
}

Point::Point(Point const& src) {
	*this = src;
	return;
}

Point&	Point::operator=(Point const& rhs) {
	if (this != &rhs) {
		this->setX(rhs.getX()); 
		this->setY(rhs.getY());
	}
	return (*this);
}

Fixed	Point::getX(void) const {
	return (this->x);
}

void	Point::setX(Fixed xPoint) {
	const_cast<Fixed&>(this->x) = xPoint;
}

Fixed	Point::getY(void) const {
	return (this->y);
}

void	Point::setY(Fixed yPoint) {
	const_cast<Fixed&>(this->y) = yPoint;
}

Point::~Point(void) {
	return;
}
