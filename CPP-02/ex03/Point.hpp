#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
		//* CON/DECON STRUCTOR
        Point();
        Point(const float num1, const float num2);
        ~Point();

		//* COPY CONSTRUCTOR
        Point(const Point &copy);

		//* COPY ASSIGNMENT CONSTRUCTOR
        Point &operator=(const Point &obj);

		//* GETTERS
		Fixed	getX(void) const;
		Fixed	getY(void) const;

		//* BSP
        bool bsp( Point const a, Point const b, Point const c, Point const point);
    };

#endif
