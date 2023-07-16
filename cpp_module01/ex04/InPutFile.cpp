/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InPutFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:38:40 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 18:14:33 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InPutFile.hpp"
#include <string>

InPutFile::InPutFile(void) {
	std::cout << "Default Constructor called!" << std::endl;
	return;
}

InPutFile::InPutFile(std::string filename) : _fileName(filename) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

InPutFile::InPutFile(InPutFile const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

InPutFile& InPutFile::operator=(InPutFile const& rhs) {
	std::cout << "Assignment Operator Called!" << std::endl;
	if (this != &rhs) {
		this->_fileName = rhs.getFileName();
		this->_oneLine = rhs.getOneLine();
	}
	return (*this);
}

void	InPutFile::setFileName(std::string filename) {
	this->_fileName = filename;
	return;
}

std::string InPutFile::getFileName(void) const {
	if (this->_fileName.rfind("/") != std::string::npos) {
		return(this->_fileName.substr(this->_fileName.rfind("/") + 1, std::string::npos));
	}
	return (this->_fileName);
}

bool	InPutFile::openIFile(void) {
	this->_iFile.open(this->_fileName.c_str());
	if (!this->_iFile.is_open()) {
		std::cout << "Invalid file name or file doesn't exist." << std::endl;
		return (false);
	}
	return (true);
}

void	InPutFile::closeIFile(void) {
	if (this->_iFile.is_open()) {
		this->_iFile.close();
	}
	return;
}

std::string	InPutFile::getNewLine(void) {
	if (!this->_iFile.is_open()) {
		std::cout << "There is no opened file!" << std::endl;
		return ("");
	}
	if (!std::getline(this->_iFile, this->_oneLine)) {
		std::cout << "There is no more lines to read." << std::endl;
		return ("");
	}
	return this->_oneLine;
}

std::string	InPutFile::getOneLine(void) const {
	return (this->_oneLine);
}

InPutFile::~InPutFile(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, InPutFile& outPutfile) {
	std::cout << "Current Line: " << outPutfile.getOneLine() << std::endl;
	return (OST);
}
