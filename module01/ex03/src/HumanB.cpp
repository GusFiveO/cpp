/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:09:43 by alorain           #+#    #+#             */
/*   Updated: 2022/07/21 20:18:31 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) : _name(name) 
{
	this->_weapon = new Weapon(weapon.getType());
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB( void )
{
	std::cout << this->_name + ": destroyed" << std::endl;
}

void HumanB::attack( void )
{
	std::cout << this->_name + " attack with their " + this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
