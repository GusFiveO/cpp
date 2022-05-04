/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:09:43 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 12:07:25 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) : _name(name), _weapon(&weapon) 
{
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) 
{
}

HumanB::~HumanB( void )
{
	if (_weapon)
		delete _weapon;
	std::cout << this->_name + ": destroyed" << std::endl;
}

void HumanB::attack( void )
{
	std::cout << this->_name + " attack with their " + this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	_weapon = new Weapon(weapon.getType());
}
