/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:53:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 21:37:53 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IAnimal.hpp"
#include "Brain.hpp"
#ifndef CAT_CLASS
#define CAT_CLASS
#include <iostream>
#include <string>

class	Cat: public IAnimal
{
public:
	Cat(void);
	Cat(Cat const& src);
	Cat&	operator=(Cat const& rhs);
	std::string	getType(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;
	void		setBrain(Brain* newBrain);
	Brain*		getBrain(void) const;
	~Cat(void);

private:
	Brain*	_brain;
};

#endif
