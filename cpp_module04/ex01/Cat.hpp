/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:53:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 18:39:38 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#ifndef CAT_CLASS
#define CAT_CLASS
#include <iostream>
#include <string>

class	Cat: public Animal
{
public:
	Cat(void);
	Cat(Cat const& src);
	Cat&	operator=(Cat const& rhs);
	void	makeSound(void) const;
	void	setBrain(Brain* newBrain);
	Brain*	getBrain(void) const;
	virtual ~Cat(void);

private:
	Brain* _brain;
};

#endif
