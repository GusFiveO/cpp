/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:19:15 by alorain           #+#    #+#             */
/*   Updated: 2022/05/03 18:41:15 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	Zombie *horde;

	std::string	name1("Remi");
	horde = zombieHorde(20 , name1);	
	for (int i = 0; i < 20; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
