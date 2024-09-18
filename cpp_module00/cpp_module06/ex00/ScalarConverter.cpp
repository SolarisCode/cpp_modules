#include "ScalarConverter.hpp"

void ScalarConvert::convert(const std::string & literal) {
	std::string pseudoLiterals[6] = { "-inff", "+inff", "-inf", "+inff", "nan", "nanf"};
	std::string	toCharacter = "";
	
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
		toCharacter = literal[0];
		std::cout << std::setw(11) << "character: " <<  toCharacter << std::endl;
		std::cout << std::setw(11) << "int: "  << static_cast<int>(toCharacter[0]) << std::endl;
		std::cout << std::setw(11) << "float: "  << static_cast<float>(toCharacter[0]) << ".0f" << std::endl;
		std::cout << std::setw(11) << "double: "  << static_cast<double>(toCharacter[0]) << ".0" << std::endl;
		return;
	}
	
	int 		toInt = std::atoi(literal.c_str());
	long 		ov = std::atol(literal.c_str());
	bool		over_flow = (ov > INT_MAX || ov < INT_MIN);
	float		toFloat = std::atof(literal.c_str());
	double		toDouble = std::atof(literal.c_str());

	if(literal[literal.length() - 1] == 'f')
		toDouble = static_cast<double>(toFloat);
	else
		toFloat = static_cast<float>(toDouble);

	for (int i = 0; i < 6; i++) {
		if (literal == pseudoLiterals[i]) {
			toCharacter = "imposibble";
			break;
		}
	}
	
	if (toCharacter == "" && toInt >= 32 && toInt <= 126) {
		toCharacter = "'";
		toCharacter += static_cast<char>(toInt);
		toCharacter += "'";
	}
	else if (toCharacter == "")
		toCharacter = "Non displayable";

	if (toCharacter == "imposibble") {
		std::cout << "character: "  << toCharacter << std::endl;
		std::cout << std::setw(11) << "int: " << "impossible" << std::endl;
	}
	else {
		std::cout << "character: " << toCharacter << std::endl;
		if (!over_flow)
			std::cout << std::setw(11) << "int: " << toInt << std::endl;
		else
			std::cout << std::setw(11) << "int: " << "overflow" << std::endl;
	}

	if (toCharacter == "imposibble" && toFloat == 0) {
		std::cout << std::setw(11) << "float: " << "impossible" << std::endl;
		std::cout << std::setw(11) << "double: " << "impossible" << std::endl;
	} else {
		if (toCharacter != "impossible" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << std::setw(11) << "float: " << toFloat << ".0f" << std::endl;
			std::cout << std::setw(11) << "double: " << toDouble << ".0" << std::endl;
		}
		else {
		std::cout << std::setw(11) << "float: " << toFloat << "f" << std::endl;
		std::cout << std::setw(11) << "double: " << toDouble << std::endl;
		}
	}
}
