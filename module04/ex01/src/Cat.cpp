/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:17:38 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 19:17:31 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & copy) : Animal(copy){
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
	std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat default destructor called" << std::endl;
}

const Cat & Cat::operator=(const Cat & assign) {
	delete this->_brain;
	this->_brain = new Brain(*assign._brain);
	this->_type = assign._type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meowing" << std::endl;
}

void Cat::printIdeas(void){
	this->_brain->printIdeas();
}

void Cat::addIdea(std::string idea){
	this->_brain->addIdea(idea);
}
