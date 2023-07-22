/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:25:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:35:53 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONG_ANIMAL_CLASS
#define WRONG_ANIMAL_CLASS
#include <iostream>
#include <string>

class	WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const& src);
	WrongAnimal&	operator=(WrongAnimal const& rhs);
	std::string	getType(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;
	virtual	~WrongAnimal(void);

protected:
	std::string	_type;
};

#endif
