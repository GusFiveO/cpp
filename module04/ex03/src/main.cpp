/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:21:44 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 20:36:28 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// TODO faire les surcharge d'operateur pour l'assignation	

int main(void)
{
	Character * remi = new Character("minigeek");
	ICharacter * gus = new Character("guslesbrabuss");
	Ice ice;
	Cure cure;
	Cure cure2(cure);

	cure2.use(*gus);

	remi->equip(&ice);
	remi->equip(&ice);
	remi->equip(&ice);
	ICharacter * lol = new Character(*remi);
	remi->use(1, *gus);
	remi->unequip(1);
	remi->equip(&cure);
	std::cout << std::endl << "Deep copy test" << std::endl << std::endl;
	lol->use(1, *gus);
	remi->use(1, *gus);
	delete remi;
	delete gus;
	delete lol;

	std::cout << std::endl << "MateriaSource TEST:" << std::endl << std::endl;

	MateriaSource source;

	source.learnMateria(&ice);
	AMateria * newMateria = source.createMateria("ice");
	AMateria * newBadMateria = source.createMateria("cure");
	if (newMateria)
	{
		std::cout << "A new materia of type " << newMateria->getType() << " have been created" << std::endl;
		delete newMateria;
	}
	if (newBadMateria)
	{
		std::cout << "A new materia of type " << newBadMateria->getType() << " have been created" << std::endl;
		delete newMateria;
	}
	else
		std::cout << "cure type have not been learned" << std::endl;
	return (0);
}
