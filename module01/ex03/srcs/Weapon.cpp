/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:57:44 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 11:24:55 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	this->type = "undefined";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon: " + this->type + " destroyed" << std::endl;
}

std::string const Weapon::getType( void )
{
	return type;
}

void Weapon::setType( std::string type)
{
	this->type = type;
}
