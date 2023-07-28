/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:53:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 19:15:16 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IAnimal.hpp"
#include "Brain.hpp"
#ifndef DOG_CLASS
#define DOG_CLASS
#include <iostream>
#include <string>

class	Dog: public IAnimal
{
public:
	Dog(void);
	Dog(Dog const& src);
	Dog&	operator=(Dog const& rhs);
	void		makeSound(void) const;
	void		setBrain(Brain* newBrain);
	Brain*		getBrain(void) const;
	~Dog(void);

private:
	Brain*	_brain;
};

#endif
