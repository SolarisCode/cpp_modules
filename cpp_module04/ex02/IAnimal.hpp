/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:25:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 21:35:33 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef IANIMAL_CLASS
#define IANIMAL_CLASS
#include <iostream>
#include <string>

class	IAnimal
{
public:
	virtual std::string	getType(void) const = 0;
	virtual void		setType(std::string type) = 0;
	virtual void		makeSound(void) const = 0;
	virtual	~IAnimal(void) {};

protected:
	std::string	_type;
};

#endif
