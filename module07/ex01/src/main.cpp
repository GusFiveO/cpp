/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:39:19 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/15 18:51:02 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int intTab[5] = {1, 2, 3, 4, 5};
	const char *strTab[5] = {"salut", "ca", "va", "mon", "pote"};
	iter(intTab, 5, print);
	iter(strTab, 5, print);
	return 0;
}
