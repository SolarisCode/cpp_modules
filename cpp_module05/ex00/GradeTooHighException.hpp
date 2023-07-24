/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:05:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/24 18:14:12 by melkholy         ###   ########.fr       */
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
	virtual const char* what(void) const throw();

};

#endif
