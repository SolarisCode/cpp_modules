/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:00:45 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 20:19:49 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class	Fixed
{
public:
	Fixed(void);
	Fixed(int const intNum);
	Fixed(float const floatNum);
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed(void);

private:
	static const int	fractionalBits = 8;
	int					_fixedPointNum;
};

std::ostream&	operator<<(std::ostream& OST, Fixed const& fixedPoint);
