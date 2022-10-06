#include "Point.hpp"
#include "Fixed.hpp"

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Point &Point::operator=(const Point &obj)
{
	(Fixed)(*this).x = obj.x;
	(Fixed)(*this).y = obj.y;
	return (*this);
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point::Point() : x(0), y(0)
{
}

Point::Point(const float num1, const float num2) : x(num1), y(num2)
{
}

Point::~Point()
{
}