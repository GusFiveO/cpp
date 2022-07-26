/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <alorain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:28:52 by alorain           #+#    #+#             */
/*   Updated: 2022/07/26 16:56:12 by alorain          ###   ########.fr       */
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
	for (int i = 0; i < 40; i++)
		bob.beRepaired(1);
	return 0;
}
