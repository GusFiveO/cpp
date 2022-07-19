/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:06 by alorain           #+#    #+#             */
/*   Updated: 2022/07/19 18:31:41 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <cstdlib>
#include <ctime>

void randomChump(std::string name)
{
	Zombie *newZ = newZombie(name);
		(*newZ).announce();
	delete newZ;
}
