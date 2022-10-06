#include "Fixed.hpp"

const int Fixed::fracBit = 8;

//* ############ COMPARAISON OPERATORS ############

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->fixedP > obj.fixedP);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->fixedP >= obj.fixedP);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->fixedP < obj.fixedP);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->fixedP <= obj.fixedP);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->fixedP == obj.fixedP);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->fixedP != obj.fixedP);
}


//* ############ ARETHMETIC OPERATORS ############
Fixed Fixed::operator*(Fixed point)
{
	this->fixedP = (float)(point.fixedP * this-> fixedP) / (1 << 8);
    return (*this);
}

Fixed Fixed::operator+(Fixed point)
{
    this->fixedP = (float)(point.fixedP + this->fixedP);
	return (*this);
}

Fixed Fixed::operator-(Fixed point)
{
	this->fixedP = (float)(this->fixedP - point.fixedP);
    return (*this);
}

Fixed Fixed::operator/(Fixed point)
{
	this->fixedP = (this->fixedP / (point.fixedP / (1 << 8)));
    return (*this);
}


//* ############ inc/dec OPERATORS ############
Fixed  Fixed::operator++()
{
    this->fixedP += roundf(0.00390625 * (1 << 8));
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp;

    tmp.fixedP = this->fixedP;
    this->fixedP += roundf(0.00390625 * (1 << 8));
    return (tmp);
}

Fixed  Fixed::operator--()
{
    this->fixedP -= roundf(0.00390625 * (1 << 8));
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp;

    tmp.fixedP = this->fixedP;
    this->fixedP -= roundf(0.00390625 * (1 << 8));
    return (tmp);
}


//* ############ MAX/MIN MEMBERS ############
const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
    if (num2 > num1)
        return (num2);
    else
        return (num1);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
    if (num2 > num1)
        return (num2);
    else
        return (num1);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
    if (num2 < num1)
        return (num2);
    else
        return (num1);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
    if (num2 < num1)
        return (num2);
    else
        return (num1);
}


//* ############ COVERSION MEMBERS ############
int Fixed::toInt( void ) const
{
   return (roundf(this->fixedP * (1 << 8)));
}

float Fixed::toFloat( void ) const
{
   return ((float)this->fixedP / (1 << 8));
}


//* ############ OUTPUT OVERLOAD ############
std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << (float)obj.getRawBits() / (1 << 8);
    return (os);
}


//* ############ ASSIGNMENT OPERATOR ############
Fixed& Fixed::operator=(const Fixed &obj)
{
    this->fixedP = obj.fixedP;
    return (*this);
}


//* ############ SETTERS/GETTERS ############
void Fixed::setRawBits(int const raw)
{
    this->fixedP = raw;
}

int Fixed::getRawBits() const
{
    return (this->fixedP);
}


//* ############ CON/DECON STRUCTERS OVERLOADS ############
Fixed::Fixed(const int val)
{
    setRawBits(val * (1 << this->fracBit));
}

Fixed::Fixed(const float val)
{
    setRawBits(roundf((float)val * (1 << this->fracBit)));
}

Fixed::Fixed(const Fixed &copy)
{
   *this = copy;
}

Fixed::~Fixed()
{
}

Fixed::Fixed()
{
    fixedP = 0;
}
