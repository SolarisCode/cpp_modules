/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:13:04 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/24 18:33:31 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef GRADETOOLOWEXCEPTION_CLASS
#define GRADETOOLOWEXCEPTION_CLASS
#include <iostream>
#include <exception>

class	GradeTooLowException: public std::exception
{
public:
	virtual const char*	what(void) const throw();
};
#endif
