#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 fixedP;
        static const int    fracBit;
    public:
		//* CONS/DES TRUCTORS
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
		
		//* COPY CONSTRUCTOR
        Fixed(const Fixed &copy);

		//* ASSIGNMENT OPERATOR
        Fixed&	operator=(const Fixed &obj);

		//* COMPARAISON OPERATORS
        bool	operator>(const Fixed &obj) const;
        bool	operator<(const Fixed &obj) const;
        bool	operator>=(const Fixed &obj) const;
        bool	operator<=(const Fixed &obj) const;
        bool	operator==(const Fixed &obj) const;
        bool	operator!=(const Fixed &obj) const;

		//* ARETHMETIC OPERATORS
        Fixed operator+(Fixed point);
        Fixed operator-(Fixed point);
        Fixed operator*(Fixed point);
        Fixed operator/(Fixed point);

		//* inc/dec OPERATORS
        Fixed	operator++();
        Fixed   operator++(int);
        Fixed   operator--();
        Fixed   operator--(int);

		//* MIN OVERLOADS
        static Fixed &min(Fixed &num1, Fixed &num2);
        static const Fixed &min(const Fixed &num1, const Fixed &num2);

		//* MAX OVERLOADS
        static Fixed &max(Fixed &num1, Fixed &num2);
        static const Fixed &max(const Fixed &num1, const Fixed &num2);

		//* GETTERS/SETTERS
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

		//* CONVERTERS
        float toFloat( void ) const;
        int toInt( void ) const;
};

//* INSERTION OPERATOR OVERLOAD
std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
