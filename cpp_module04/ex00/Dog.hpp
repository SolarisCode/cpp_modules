/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:53:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:12:24 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#ifndef DOG_CLASS
#define DOG_CLASS
#include <iostream>
#include <string>

class	Dog: public Animal
{
public:
	Dog(void);
	Dog(Dog const& src);
	Dog&	operator=(Dog const& rhs);
	void	makeSound(void) const;
	~Dog(void);
};

#endif
