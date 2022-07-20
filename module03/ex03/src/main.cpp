/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:28:52 by alorain           #+#    #+#             */
/*   Updated: 2022/07/20 16:25:46 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap bob("Bob");

	bob.highFivesGuys();
	bob.whoAmI();
	for (int i = 0; i < 11; i++)
		bob.attack("Eric");
	for (int i = 0; i < 10; i++)
		bob.takeDamage(10);
	for (int i = 0; i < 10; i++)
		bob.beRepaired(10);
	return 0;
}
