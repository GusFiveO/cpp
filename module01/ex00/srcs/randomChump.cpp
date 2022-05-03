/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:06 by alorain           #+#    #+#             */
/*   Updated: 2022/05/03 18:19:04 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <cstdlib>
#include <ctime>

void randomChump(std::string name)
{
	Zombie *newZ = newZombie(name);
	//std::srand(std::time(NULL));
	//if (std::rand() % 2)
		(*newZ).announce();
	delete newZ;
}
