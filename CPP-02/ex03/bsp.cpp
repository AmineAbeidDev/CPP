#include "Point.hpp"

float calcArea(Point a, Point b, Point c)
{
    Fixed area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	return (area.toFloat());
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const p)
{
    float ABC = calcArea(a, b, c);
    
    float PAB = calcArea(a, b, p);

    float PBC = calcArea(p, b, c);

    float PAC = calcArea(a, p, c);

    std::cout << "\narea: "<< PAB << std::endl;
    std::cout << "area: "<< PBC << std::endl;
    std::cout << "area: "<< PAC << std::endl;
    std::cout << "\narea: "<< ABC << "\n" << std::endl;
    if (PAB + PBC + PAC != ABC || PAB <= 0 || PBC <= 0 || PAC <= 0)
        return (false);
    return (true);
}
