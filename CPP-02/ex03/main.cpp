#include "Point.hpp"

int main (void)
{
    Point x;

	//? 8.99	Inside 0.01 near the edge
	//? 9.0		On the edge
    std::cout << x.bsp(Point(0.0f, 0.0f), Point(20.0f, 0.0f), Point(10.0f, 30.0f), Point(17.0f, 8.99f)) << std::endl;
    return (0);
}
