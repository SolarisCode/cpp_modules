/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:28:42 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 19:30:59 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_CLASS
#define MATERIASOURCE_CLASS
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const& src);
	MateriaSource&	operator=(MateriaSource const& rhs);
	AMateria* const*	getMaterisArray(void) const;
	void		setToNull(void);
	void		setMaterisArray(AMateria* const* newArray);
	void		setArrayLength(int length);
	int			getArrayLength(void) const;
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
	~MateriaSource(void);

private:
	AMateria*	_materiasArray[4];
	int			_arraylength;
};


#endif
