/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:32:07 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/22 02:49:29 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wMeta = new WrongAnimal();
	const WrongAnimal*	w = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	wMeta->makeSound();
	i->makeSound();
	j->makeSound();
	w->makeSound();
	std::cout << std::endl;
	delete meta;
	delete wMeta;
	std::cout << std::endl;
	delete j;
	delete i;
	delete w;
	return 0;
}
