/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:15:21 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/07 15:13:00 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	std::string cpy;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			cpy = argv[i];
			for (size_t j = 0; j < cpy.length(); j++)
				cpy[j] = (char)std::toupper(cpy[j]);
			std::cout << cpy;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
