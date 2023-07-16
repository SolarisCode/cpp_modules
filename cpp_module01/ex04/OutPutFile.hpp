/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutPutFile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:43:42 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 18:16:44 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include <iostream>
#include <string>

class	OutPutFile {

public:
	OutPutFile(void);
	OutPutFile(std::string filename);
	OutPutFile(OutPutFile const& src);
	OutPutFile	&operator=(OutPutFile const& rhs);
	void	setFileName(std::string filename);
	std::string	getFileName(void) const;
	void		setLastLine(std::string& lastline);
	std::string	getLastLine(void) const;
	bool		openOutFile(void);
	void		closeOutFile(void);
	void		replaceString(std::string& oldString, std::string& newString);
	~OutPutFile(void);

private:
	std::string		_fileName;
	std::string		_lastLine;
	std::ofstream	_oFile;
	bool			_fileIsOpen(void) const;
	bool			_findString(std::string& str);
};
