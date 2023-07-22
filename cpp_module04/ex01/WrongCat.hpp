/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:53:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:40:32 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#ifndef WRONG_CAT_CLASS
#define WRONG_CAT_CLASS
#include <iostream>
#include <string>

class	WrongCat: public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(WrongCat const& src);
	WrongCat&	operator=(WrongCat const& rhs);
	void	makeSound(void) const;
	~WrongCat(void);
};

#endif
