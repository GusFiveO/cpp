/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:03:40 by alorain           #+#    #+#             */
/*   Updated: 2022/05/03 18:38:35 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <cstdlib>
#include <ctime>

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie *horde = new Zombie[N];
	while (i < N)
		horde[i++].setName(name);
	return horde;
}
