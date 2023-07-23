/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:13:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 17:47:28 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_CLASS
#define CURE_CLASS
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class	Cure: public AMateria
{
public:
	Cure(void);
	Cure(Cure const& src);
	Cure&	operator=(Cure const& rhs);
	Cure*	clone(void) const;
	void	use(ICharacter& terget);
	~Cure(void);
};

#endif
