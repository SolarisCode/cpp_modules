/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:13:04 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/25 11:43:12 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef GRADETOOLOWEXCEPTION_CLASS
#define GRADETOOLOWEXCEPTION_CLASS
#include <iostream>
#include <exception>
#include <string>

class	GradeTooLowException: public std::exception
{
public:
	GradeTooLowException(const std::string& message);
	virtual const char*	what(void) const throw();

private:
	std::string	_message;
};
#endif
