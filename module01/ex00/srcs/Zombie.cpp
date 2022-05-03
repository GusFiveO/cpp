/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:01:39 by alorain           #+#    #+#             */
/*   Updated: 2022/05/03 18:08:29 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << this->name + ": " << "is destroyed." << std::endl;
}
