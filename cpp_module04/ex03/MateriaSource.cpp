/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:40:04 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 19:58:06 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void) : _arraylength(0) {
	this->setToNull();
	return;
}

MateriaSource::MateriaSource(MateriaSource const& src) : _arraylength(0) {
	this->setToNull();
	if (src.getArrayLength())
	{
		for (int index = 0; index < src.getArrayLength(); index++) {
			this->_materiasArray[index] = src.getMaterisArray()[index]->clone();
		}
		this->setArrayLength(src.getArrayLength());
	}
	return;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs) {
	this->setToNull();
	if (rhs.getArrayLength())
	{
		for (int index = 0; index < rhs.getArrayLength(); index++) {
			this->_materiasArray[index] = rhs.getMaterisArray()[index]->clone();
		}
		this->setArrayLength(rhs.getArrayLength());
	}
	return (*this);
}

void	MateriaSource::setToNull(void) {
	for (int i = 0; i < 4; i++) {
		this->_materiasArray[i] = NULL;
	}
}

AMateria* const*	MateriaSource::getMaterisArray(void) const {
	return (this->_materiasArray);
}

void	MateriaSource::setMaterisArray(AMateria* const* newArray) {
	for (int index = 0; index < 4; index++) {
		this->_materiasArray[index] = newArray[index];
	}
	this->_arraylength = 4;
	return;
}

void	MateriaSource::setArrayLength(int length) {
	this->_arraylength = length;
	return;
}

int	MateriaSource::getArrayLength(void) const {
	return (this->_arraylength);
}


void	MateriaSource::learnMateria(AMateria* m) {
	if (this->_arraylength == 4) return;
	this->_materiasArray[this->_arraylength] = m;
	this->_arraylength++;
	return;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (this->_arraylength > 0) 
	{
		for (int index = 0; index < this->_arraylength; index++)
		{
			if (this->_materiasArray[index]->getType() == type) {
				return (this->_materiasArray[index]->clone());
			}
		}
	}
	std::cout << "Materia Array is empty or type is not found!" <<  std::endl;
	return (NULL);
}

MateriaSource::~MateriaSource(void) {
	for (int index = 0; index < this->_arraylength; index++)
	{
			delete this->_materiasArray[index];
	}
	return;
}
