/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutPutfile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:07:32 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 18:17:38 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OutPutFile.hpp"
#include <string>

OutPutFile::OutPutFile(void) : _fileName("output.txt"){
	std::cout << "Default Constructor called!" << std::endl;
	return;
}

OutPutFile::OutPutFile(std::string filename) : _fileName(filename) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

OutPutFile::OutPutFile(OutPutFile const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

OutPutFile& OutPutFile::operator=(OutPutFile const& rhs) {
	std::cout << "Assignment Operator Called!" << std::endl;
	if (this != &rhs) {
		this->_fileName = rhs.getFileName();
		this->_lastLine = rhs.getLastLine();
	}
	return (*this);
}

void	OutPutFile::setFileName(std::string filename) {
	this->_fileName = filename + ".replace";
}

std::string	OutPutFile::getFileName(void) const {
	return (this->_fileName);
}

std::string	OutPutFile::getLastLine(void) const {
	return (this->_lastLine);
}

void	OutPutFile::setLastLine(std::string& lastline) {
	this->_lastLine = lastline;
	return;
}

bool	OutPutFile::_fileIsOpen(void) const {
	if (!this->_oFile.is_open()) {
		std::cout << "Permission denied!" << std::endl;
		return (false);
	}
	return (true);
}

bool	OutPutFile::openOutFile(void) {
	// if (!filename.empty()) {
	// 	this->_oFile.open(filename);
	// 	return (this->_fileIsOpen());
	// }
	this->_oFile.open(this->_fileName.c_str());
	return (this->_fileIsOpen());
}

void	OutPutFile::closeOutFile(void) {
	if (this->_oFile.is_open()) {
		this->_oFile.close();
	}
	return;
}

bool	OutPutFile::_findString(std::string& str) {
	if (this->_lastLine.find(str) != std::string::npos) {
		return (true);
	}
	return (false);
}

void	OutPutFile::replaceString(std::string& oldString, std::string& newString) {
	int			foundIndex;
	int			oldStringLength = oldString.length();
	std::string	newLine;

	if (!this->_oFile.is_open()) {
		std::cout << "There is no output opened file, please open a file first.\n";
		return;
	}
	while (this->_findString(oldString)) {
		foundIndex = this->_lastLine.find(oldString);
		if (foundIndex)
			newLine.append(this->_lastLine.substr(0, foundIndex));
		newLine.append(newString);
		newLine.append(this->_lastLine.substr(foundIndex + oldStringLength, std::string::npos));
		this->_lastLine = newLine;
		newLine.clear();
	}
	this->_oFile << this->_lastLine << "\n";
	return;
}

OutPutFile::~OutPutFile(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}
