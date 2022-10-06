#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 fixedP;
        static const int    fracBit;
    public:
		//* CON/DECON STRUCTOR
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();

		//* COPY CONSTRUCTOR
        Fixed(const Fixed &copy);

		//* COPY ASSIGNMENT CONSTRUCTOR
        Fixed& operator=(const Fixed &point);

		//* SETTERS/GETTERS
        void    setRawBits( int const raw );
        int     getRawBits( void ) const;

		//* CONVERTERS
        float toFloat( void ) const;
        int toInt( void ) const;
};
//* INSERTION OVERLOAD
std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
