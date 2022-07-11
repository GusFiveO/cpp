/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:55:08 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 19:42:57 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_name = "default";
	this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) {
	this->_materia = new AMateria*[4];
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character(const Character & copy) {
	this->_materia = new AMateria*[4];
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i];
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(void) {
	delete [] _materia;
	std::cout << "Character default destructor called" << std::endl;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {

	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
		return ;
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0)
		return ;
	if (this->_materia[idx])
		this->_materia[idx]->use(target);
	else
		std::cout << "No materia at this index" << std::endl;
}
