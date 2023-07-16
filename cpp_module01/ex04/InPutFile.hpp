/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InPutFile.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:24:39 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 17:06:15 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include <iostream>
#include <string>

class	InPutFile {

public:
	InPutFile(void);
	InPutFile(std::string filename);
	InPutFile(InPutFile const& src);
	InPutFile &operator=(InPutFile const& rhs);
	void		setFileName(std::string filename);
	std::string	getFileName(void) const;
	std::string	getOneLine(void) const;
	std::string	getNewLine(void);
	bool		openIFile(void);
	void		closeIFile(void);
	~InPutFile(void);

private:
	std::string		_fileName;
	std::string		_oneLine;
	std::ifstream	_iFile;
};

std::ostream&	operator<<(std::ostream& OST, InPutFile& outPutfile);
