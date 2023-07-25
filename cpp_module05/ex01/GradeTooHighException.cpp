/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:10:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/25 11:47:23 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException(const std::string& message)
	: _message(message) {
		return;
}

const char*	GradeTooHighException::what(void) const throw() {
	if (!this->_message.empty()) {
		return (this->_message.c_str());
	}
	return ("GradeTooHighException");
}
