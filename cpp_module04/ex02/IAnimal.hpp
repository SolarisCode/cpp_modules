/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:25:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 19:03:34 by melkholy         ###   ########.fr       */
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
	IAnimal(void);
	IAnimal(IAnimal const& src);
	IAnimal& operator=(IAnimal const& rhs);
	virtual std::string	getType(void) const;
	virtual void		setType(std::string type);
	virtual void		makeSound(void) const = 0;
	virtual	~IAnimal(void);

protected:
	std::string	_type;
};

#endif
