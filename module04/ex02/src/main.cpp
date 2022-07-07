/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:15:54 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 18:26:51 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	std::cout << "second test part" << std::endl;

	const Animal * tab[8];

	for (int k = 0; k < 4; k++)
		tab[k] = new Cat();
	for (int k = 4; k < 8; k++)
		tab[k] = new Dog();
	for (int k = 0; k < 8; k++)
		tab[k]->makeSound();
	for (int k = 0; k < 8; k++)
		delete tab[k];

	std::cout << "third test part" << std::endl;

	Brain brain1;
	Brain brain2 = brain1;


	brain1.addIdea("idea de fou\n");
	brain2.printIdeas();

	Cat cat1;
	Cat cat2;
	cat2 = cat1;


	cat1.addIdea("idea de fou\n");
	cat2.printIdeas();
	
	Dog * dog1 = new Dog;
	Dog dog2 = *dog1;


	dog1->addIdea("idea de fou\n");
	dog2.printIdeas();

	delete dog1;
	return 0;
}
