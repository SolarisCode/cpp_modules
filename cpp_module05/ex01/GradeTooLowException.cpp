/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:16:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/08/24 20:11:52 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException(std::string const& message)
	: _message(message)
{
	this->_message.append("::GradeTooLowException");
}

const char* GradeTooLowException::what(void) const throw() {
	return (this->_message.c_str());
}

GradeTooLowException::~GradeTooLowException(void) _NOEXCEPT {
	return;
}
