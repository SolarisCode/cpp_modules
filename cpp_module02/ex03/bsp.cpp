/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 00:58:42 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/27 14:46:25 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed result1 = ((b.getY() - c.getY()) * (point.getX() - c.getX()) +
					(c.getX() - b.getX()) * (point.getY() - c.getY())) /
					((b.getY() - c.getY()) * (a.getX() - c.getX()) +
					(c.getX() - b.getX()) * (a.getY() - c.getY()));
	
	Fixed result2 = ((c.getY() - a.getY()) * (point.getX() - c.getX()) +
					(a.getX() - c.getX()) * (point.getY() - c.getY())) /
					((b.getY() - c.getY()) * (a.getX() - c.getX()) +
					(c.getX() - b.getX()) * (a.getY() - c.getY()));
	
	Fixed result3 = Fixed(1) - result1 - result2;
	return (result1.toFloat() > 0 && result1.toFloat() < 1 && result2.toFloat() > 0 &&
			result2.toFloat() < 1 && result3.toFloat() > 0 && result3.toFloat() < 1);
}
