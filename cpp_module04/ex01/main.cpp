/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:32:07 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 18:40:23 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal*	j = new Dog();
	std::cout << std::endl;
	const Animal*	i = new Cat();
	std::cout << std::endl;

	Animal *animalArray[6];

	std::cout << "_______________________________" << std::endl;
	std::cout << "Creating the Animals array!" << std::endl;
	std::cout << "_______________________________" << std::endl;
	for (int index = 0; index < 3; index++) {
		std::cout << std::endl;
		animalArray[index] = new Cat();
		std::cout << std::endl;
		animalArray[index + 3] = new Dog();
	}

	std::cout << "_______________________________" << std::endl;
	std::cout << "Animals are making sound!" << std::endl;
	std::cout << "_______________________________" << std::endl;
	for (int index = 0; index < 3; index++) {
		std::cout << std::endl;
		animalArray[index]->makeSound();
		std::cout << std::endl;
		animalArray[index + 3]->makeSound();
	}

	std::cout << "_______________________________" << std::endl;
	std::cout << "Deleting the array!" << std::endl;
	std::cout << "_______________________________" << std::endl;
	for (int index = 0; index < 6; index++) {
		std::cout << std::endl;
		delete animalArray[index];
	}

	std::cout << "_______________________________" << std::endl;
	std::cout << "Checking the deep copy feature." << std::endl;
	std::cout << "_______________________________" << std::endl;
	Cat*	syamy = new Cat();
	std::cout << std::endl;
	Dog*	puddle = new Dog();
	std::cout << std::endl;
	Cat	kitty;
	std::cout << std::endl;
	Dog	doggy;

	std::cout << std::endl;
	doggy = *puddle;
	std::cout << std::endl;
	kitty = *syamy;
	std::cout << "________________________________________" << std::endl;
	std::cout << "Deleting the rest of allocating memory!" << std::endl;
	std::cout << "________________________________________" << std::endl;
	delete j;
	std::cout << std::endl;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	delete syamy;
	std::cout << std::endl;
	std::cout << std::endl;
	delete puddle;
	std::cout << std::endl;
	std::cout << std::endl;
	kitty.makeSound();
	std::cout << std::endl;
	doggy.makeSound();
	std::cout << std::endl;
	// Dog	basic;
	// std::cout << std::endl;
	// {
	// 	Dog tmp = basic;
	// std::cout << std::endl;
	// }
	// std::cout << std::endl;
	return 0;
}
