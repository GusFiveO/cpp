#include "Fixed.hpp"
#include "Point.hpp"

Fixed	defineW1(Point const a, Point const b, Point const c, Point const point) {
	Fixed w1;

	w1 = a.getX() * (c.getY() - a.getY()) + (point.getY() - a.getY()) * (c.getX() - a.getX()) - point.getX() * (c.getY() - a.getY());
	w1 /= (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY());
	return w1;
}

Fixed	defineW2(Fixed w1, Point const a, Point const b, Point const c, Point const point) {
	Fixed w2;
	
	w2 = point.getY() - a.getY() - w1 * (b.getY() - a.getY());
	if (c.getY() - a.getY() != 0)
		w2 /= (c.getY() - a.getY());
	return w2;
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed w1;
	Fixed w2;

	if (a.getY() == 0 && b.getY() == 0 && c.getY() == 0 && point.getY() == 0
		&& a.getX() == 0 && b.getX()== 0 && c.getX() == 0 && point.getX() == 0)
		return true;
	w1 = defineW1(a, b, c, point).toFloat();
	w2 = defineW2(w1, a, b, c, point).toFloat();
	if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
		return true;
	return false;
}
