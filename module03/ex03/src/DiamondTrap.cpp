/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:38:20 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 17:46:26 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : _name("Default"){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap & copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
	this->_name = copy._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamages = copy._attackDamages;
}
		
DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void) const {
	std::cout << "Diamond name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl; 
}
