/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    GradeTooLowException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:16:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/24 18:17:39 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

const char* GradeTooLowException::what(void) const throw() {
	return ("Bureaucrat::GradeTooLowException");
}
