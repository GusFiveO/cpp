/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:15:54 by alorain           #+#    #+#             */
/*   Updated: 2022/07/21 16:57:05 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete i;
	delete j;

	std::cout << "second test part" << std::endl;

	const AAnimal * tab[8];

	for (int k = 0; k < 4; k++)
		tab[k] = new Cat();
	for (int k = 4; k < 8; k++)
		tab[k] = new Dog();
	for (int k = 0; k < 8; k++)
		tab[k]->makeSound();
	for (int k = 0; k < 8; k++)
		delete tab[k];

	//std::cout << "third test part" << std::endl;

	//AAnimal * animal = new AAnimal();

	//animal->makeSound();

	//delete animal;
	return 0;
}
