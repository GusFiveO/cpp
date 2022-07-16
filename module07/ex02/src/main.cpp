/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:39:19 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/16 16:42:27 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {
	Array<int> * intArray = new Array<int>(5);
	int temp = (*intArray)[3];
	std::cout << temp << std::endl;
	delete intArray;
	return 0;
}
