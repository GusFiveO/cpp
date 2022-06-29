#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {
	//std::cout << "Constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {
	//std::cout << "Constructor called" << std::endl;
}

const Fixed Point::getX(void) const {
	return (this->_x);
}

const Fixed Point::getY(void) const {
	return (this->_y);
}

Point::Point(const Point & p) : _x(Fixed(p.getX())), _y(Fixed(p.getY())){
	//std::cout << "Point copy constructor called" << std::endl;
}

Point::~Point(void) {
}

const Point & Point::operator=(const Point & rhs) {
	(void)rhs;
	return *this;
}
