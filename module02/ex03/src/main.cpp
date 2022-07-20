/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/20 14:41:22 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	const Point a(0, 0);
	const Point b(2, 2);
	const Point c(4, 0);
	const Point point(2, 1);
	std::cout << "a(" << a.getX() << "," << a.getY() << ")" << std::endl;
	std::cout << "b(" << b.getX() << "," << b.getY() << ")" << std::endl;
	std::cout << "c(" << c.getX() << "," << c.getY() << ")" << std::endl;
	std::cout << "p(" << point.getX() << "," << point.getY() << ")";
	if (bsp(a, b ,c ,point) == true)
		std::cout << " is in the a,b,c triangle" << std::endl;
	else
		std::cout << " is not in the a,b,c triangle" << std::endl;
	const Point point2(2, 4);
	std::cout << "p2(" << point2.getX() << "," << point2.getY() << ")";
	if (bsp(a, b ,c ,point2) == true)
		std::cout << " is in the a,b,c triangle" << std::endl;
	else
		std::cout << " is not in the a,b,c triangle" << std::endl;
	return 0;
}
