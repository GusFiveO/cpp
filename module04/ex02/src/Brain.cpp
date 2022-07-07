/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:58:29 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 18:18:47 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring>

Brain::Brain(void) {
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Ajoutez une idee\n";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & copy) {
	this->_ideas = new std::string[100];

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void) {
	delete [] this->_ideas;
	std::cout << "Brain default destructor called" << std::endl;
}

const Brain & Brain::operator=(const Brain & assign) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign._ideas[i];
	return *this;
}

void Brain::addIdea(std::string idea) {
	static int i;
	
	this->_ideas[i++] = idea;
}

void Brain::printIdeas(void) const {
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}
