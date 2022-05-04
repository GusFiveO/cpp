/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:09:43 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 11:56:28 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA( void )
{
	std::cout << this->_name + ": destroyed" << std::endl;
}

void HumanA::attack( void )
{
	std::cout << this->_name + " attack with their " + this->_weapon.getType() << std::endl;
}
