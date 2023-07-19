/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:57:33 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 01:04:11 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point	a = Point(0, 0);
	Point	b = Point(5, 0);
	Point	c = Point(2.5, 4);
	Point	p = Point(3, 2);
	
	if (bsp(a, b, c, p)) {
		std::cout << "Point P is inside the triangle ABC." << std::endl;
	} else {
		std::cout << "Point P is outside the triangle ABC." << std::endl;
	}
	return 0;
}
