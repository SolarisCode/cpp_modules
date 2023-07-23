/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:13:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 17:33:17 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_CLASS
#define ICE_CLASS
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class	Ice: public AMateria
{
public:
	Ice(void);
	// Ice(std::string const& type);
	Ice(Ice const& src);
	Ice&	operator=(Ice const& rhs);
	Ice*	clone(void) const;
	void	use(ICharacter& terget);
	~Ice(void);
};

#endif
