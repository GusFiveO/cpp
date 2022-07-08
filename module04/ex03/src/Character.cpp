/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:55:08 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 15:06:02 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_materia = new AMateria[4];
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character & copy) {
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy->_materia[i];
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
}

void Character::unequip(int idx) {
}

void Character::use(int idx, ICharacter& target) {
}
