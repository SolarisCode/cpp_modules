/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:24:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/19 23:43:41 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(float const x, float const y);
	Point(const Point& src);
	Point	&operator=(const Point& rhs);
	Fixed	getX(void) const;
	void	setX(Fixed const xPoint);
	Fixed	getY(void) const;
	void	setY(Fixed const yPoint);
	~Point(void);

private:
	Fixed const	x;
	Fixed const	y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
