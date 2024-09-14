/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:02:17 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/14 14:52:56 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150){
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()){
	*this = src;
	return;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs) {
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void) {
	if (!(this->_grade - 1))
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return;
}

void	Bureaucrat::decrementGrade(void) {
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException\n");
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

std::ostream&	operator<<(std::ostream& OST, Bureaucrat const& obj) {
	OST << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (OST);
}
