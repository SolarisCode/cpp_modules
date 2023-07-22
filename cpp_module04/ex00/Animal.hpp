/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:25:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:08:19 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS
#include <iostream>
#include <string>

class	Animal
{
public:
	Animal(void);
	Animal(Animal const& src);
	Animal&	operator=(Animal const& rhs);
	std::string		getType(void) const;
	void			setType(std::string type);
	virtual void	makeSound(void) const;
	virtual	~Animal(void);

protected:
	std::string	_type;
};

#endif
