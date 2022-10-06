#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    private:
        int                 fixedP;
        static const int    fracBit;
    public:
		//* DEFAULT C/DEC ONSTRUCTOR
        Fixed();
        ~Fixed();

		//* COPY CONSTRUCTOR
        Fixed(const Fixed &copy);

		//* COPY ASSIGNMENT OPERATOR
        Fixed& operator=(const Fixed &fixed);

		//* GETTERS/SETTERS
        void    setRawBits( int const raw );
        int     getRawBits( void ) const;
};

#endif
