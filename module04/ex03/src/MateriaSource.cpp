/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:11:04 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 20:26:45 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(void) {
	this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & copy) {
	this->_materia = new AMateria*[4];	
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i];
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void) {
	delete [] this->_materia;
	std::cout << "MateriaSource default destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria * m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string & type) {
	AMateria * ret;

	for (int i = 0; i < 4; i++)
	{
		if (type == "ice" && this->_materia[i] && this->_materia[i]->getType() == type)
		{
			ret = new Ice(*this->_materia[i]); 
			return ret;
		}
		else if (type == "cure" && this->_materia[i] && this->_materia[i]->getType() == type)
		{
			ret = new Cure(*this->_materia[i]);
			return ret;
		}
	}
	return NULL;
}
