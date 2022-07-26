/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <alorain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:45:35 by alorain           #+#    #+#             */
/*   Updated: 2022/07/26 16:52:21 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->_name = "Default";	
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamages = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamages = 30;
	std::cout << "FragTrap parameterized constuctor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;

}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

const FragTrap & FragTrap::operator=(const FragTrap & assign) {
	this->_name = assign._name;
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamages = assign._attackDamages;
	return *this;
}

void FragTrap::highFivesGuys(void) const {
	std::cout << "High fives ?" << std::endl;
}
