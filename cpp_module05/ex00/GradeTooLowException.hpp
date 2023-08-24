/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:13:04 by melkholy          #+#    #+#             */
/*   Updated: 2023/08/24 20:07:43 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#ifndef GRADETOOLOWEXCEPTION_CLASS
#define GRADETOOLOWEXCEPTION_CLASS
#include <iostream>
#include <exception>

class	GradeTooLowException: public std::exception
{
public:
	GradeTooLowException(std::string const& message);
	virtual const char*	what(void) const throw();
	~GradeTooLowException(void) _NOEXCEPT;

private:
	std::string	_message;
};
#endif
