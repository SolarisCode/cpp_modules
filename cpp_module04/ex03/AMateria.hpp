/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:42:03 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 20:03:03 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_CLASS
#define AMATERIA_CLASS
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class	ICharacter;

class	AMateria
{
public:
	AMateria(void);
	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	AMateria&	operator=(AMateria const& rhs);
	std::string const&	getType(void) const;
	void				setType(std::string const& type);
	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);
	virtual	~AMateria(void);

protected:
	std::string	_type;
};

#endif
