/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:16:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/25 11:47:11 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException(const std::string& message)
	: _message(message) {
		return;
}

const char* GradeTooLowException::what(void) const throw() {
	if (!this->_message.empty()) {
		return (this->_message.c_str());
	}
	return ("Bureaucrat::GradeTooLowException");
}
