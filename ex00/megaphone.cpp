/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:15:21 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/05/01 19:35:33 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

void	printUpperCase(char *str)
{
	int	i;
	char	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout << c;
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			printUpperCase(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
