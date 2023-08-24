/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:10:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/08/24 21:06:07 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException(std::string const& message)
	: _message(message)
{
	this->_message.append("::GradeTooHighException");
	return;
}

const char*	GradeTooHighException::what(void) const throw() {
	return (this->_message.c_str());
}

GradeTooHighException::~GradeTooHighException(void) _NOEXCEPT {
	return;
}
