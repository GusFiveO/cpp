/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:19:15 by alorain           #+#    #+#             */
/*   Updated: 2022/07/22 11:36:33 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	std::string	name1("Remi");
	std::string	name2("Gus");
	std::string	name3("Romain");
	std::string	name4("Leo");
	std::string	name5("Ntige");
		
	randomChump(name1);
	std::cout << std::endl;
	randomChump(name2);
	std::cout << std::endl;
	randomChump(name3);
	std::cout << std::endl;
	randomChump(name4);
	std::cout << std::endl;
	randomChump(name5);
	std::cout << std::endl;
	Zombie * eric = newZombie("eric");
	eric->announce();
	delete eric;

	return (0);
}
