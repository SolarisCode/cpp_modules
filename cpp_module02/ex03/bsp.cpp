/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 00:58:42 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 01:17:05 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed lambda1 = ((b.getY() - c.getY()) * (point.getX() - c.getX()) +
					(c.getX() - b.getX()) * (point.getY() - c.getY())) /
					((b.getY() - c.getY()) * (a.getX() - c.getX()) +
					(c.getX() - b.getX()) * (a.getY() - c.getY()));
	
	Fixed lambda2 = ((c.getY() - a.getY()) * (point.getX() - c.getX()) +
					(a.getX() - c.getX()) * (point.getY() - c.getY())) /
					((b.getY() - c.getY()) * (a.getX() - c.getX()) +
					(c.getX() - b.getX()) * (a.getY() - c.getY()));
	
	Fixed lambda3 = Fixed(1) - lambda1 - lambda2;
	return (lambda1.toFloat() > 0 && lambda1.toFloat() < 1 && lambda2.toFloat() > 0 &&
			lambda2.toFloat() < 1 && lambda3.toFloat() > 0 && lambda3.toFloat() < 1);
}
