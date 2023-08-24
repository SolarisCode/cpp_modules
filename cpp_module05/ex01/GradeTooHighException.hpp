/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:05:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/08/24 20:05:12 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef GRADETOOHIGHEXCEPTION_CLASS
#define GRADETOOHIGHEXCEPTION_CLASS
#include <iostream>
#include <exception>

class	GradeTooHighException: public std::exception
{
public:
	GradeTooHighException(std::string const& message);
	virtual const char* what(void) const throw();
	~GradeTooHighException(void) _NOEXCEPT;

private:
	std::string	_message;
};

#endif
