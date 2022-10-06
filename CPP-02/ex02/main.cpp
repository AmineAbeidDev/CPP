#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;


	Fixed v1(4.8f);
	Fixed v2(1);
	Fixed v3(4.8f);
	Fixed v4(1);
	Fixed v5(4.8f);
	Fixed v6(1);
	Fixed v7(4.8f);
	Fixed v8(1);
	Fixed v9;

	v9 = v7;

	std::cout << v9 << std::endl;
	std::cout << "Addition: " << (v1 + v2) << std::endl; // 5.8
	std::cout << "Division: " << (v3 / v4) << std::endl; // 4.8
	std::cout << "Subtraction: " << (v5 - v6) << std::endl; //3.8
	std::cout << "Multiplication: " << (v7 * v8) << std::endl; //4.8
    return 0;
}
