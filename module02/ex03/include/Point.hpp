#include <iostream>
#include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const Point & p);
		Point(const float x, const float y);
		~Point(void);
		const Point & operator=(const Point & rhs) ;
		const Fixed getX(void) const;
		const Fixed getY(void) const;
	private:
		const Fixed _x;
		const Fixed _y;
};

std::ostream & operator<<(std::ostream & o, Point const & p);
