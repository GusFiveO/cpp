/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:17:30 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 12:38:18 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_brain = new Brain();
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & copy) : AAnimal(copy){
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
	std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog default destructor called" << std::endl;
}

const Dog & Dog::operator=(const Dog & assign) {
	delete this->_brain;
	this->_brain = new Brain(*assign._brain);
	this->_type = assign._type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Barking" << std::endl;
}

void Dog::printIdeas(void){
	this->_brain->printIdeas();
}

void Dog::addIdea(std::string idea){
	this->_brain->addIdea(idea);
}
