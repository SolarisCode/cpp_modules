/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:00:45 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 19:09:05 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class	Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed (void);

private:
	static const int	fractionalBits = 8;
	int					_fixedPointNum;
};
