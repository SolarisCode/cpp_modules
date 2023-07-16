/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:46:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 18:24:35 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InPutFile.hpp"
#include "OutPutFile.hpp"
#include <string>

std::string* convertToStringObject(char **argv) {
	std::string*	inPutArgs;

	inPutArgs = new std::string[4];
	for (int index = 0; index < 4; index++) {
		inPutArgs[index] = argv[index];
	}
	return (inPutArgs);
}

int	main(int argc, char* argv[]) {
	InPutFile		inputFile;
	OutPutFile		outputFile;
	std::string*	inPutArgs;
	std::string		line;

	if (argc < 4) {
		std::cout << "Invalid Input: please enter <filename> " <<
			"<String1 to be replaced> <String2 to replace with>." << std::endl;
		return (1);
	}
	inPutArgs = convertToStringObject(argv);
	inputFile.setFileName(inPutArgs[1]);
	inputFile.openIFile();
	outputFile.setFileName(inputFile.getFileName());
	outputFile.openOutFile();
	do {
		line = inputFile.getNewLine();
		outputFile.setLastLine(line);
		outputFile.replaceString(inPutArgs[2], inPutArgs[3]);
	} while (!line.empty());
	outputFile.closeOutFile();
	inputFile.closeIFile();
	delete[] inPutArgs;
}
