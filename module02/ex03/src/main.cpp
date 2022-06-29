/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:18 by alorain           #+#    #+#             */
/*   Updated: 2022/06/29 18:26:56 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	const Point a(0, 0);
	const Point b(0, 0);
	const Point c(0, 0);
	const Point point(0, 0);
	if (bsp(a, b ,c ,point) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return 0;
}
