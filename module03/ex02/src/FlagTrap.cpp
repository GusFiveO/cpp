/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:45:35 by alorain           #+#    #+#             */
/*   Updated: 2022/07/20 16:22:47 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) {
	this->_name = "Default";	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
	std::cout << "FlagTrap default constructor called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
	std::cout << "FragTrap parameterized constuctor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap & copy) : ClapTrap(copy) {
	std::cout << "FlagTrap copy constructor called" << std::endl;

}

FlagTrap::~FlagTrap(void) {
	std::cout << "FlagTrap destructor called" << std::endl;
}

const FlagTrap & FlagTrap::operator=(const FlagTrap & assign) {
	this->_name = assign._name;
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamages = assign._attackDamages;
	return *this;
}

void FlagTrap::highFivesGuys(void) const {
	std::cout << "High fives ?" << std::endl;
}
