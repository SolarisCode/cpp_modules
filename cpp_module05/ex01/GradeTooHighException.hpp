/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:05:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/25 11:43:27 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef GRADETOOHIGHEXCEPTION_CLASS
#define GRADETOOHIGHEXCEPTION_CLASS
#include <iostream>
#include <exception>
#include <string>

class	GradeTooHighException: public std::exception
{
public:
	GradeTooHighException(const std::string& message);
	virtual const char* what(void) const throw();

private:
	std::string	_message;
};

#endif
