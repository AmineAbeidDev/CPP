#include "Fixed.hpp"

const int Fixed::fracBit = 8;


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedP = 0;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(val * (1 << this->fracBit));
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(val * (1 << this->fracBit)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &point)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedP = point.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedP = raw;
}

int Fixed::getRawBits() const
{
    return (this->fixedP);
}

int Fixed::toInt( void ) const
{
   return (getRawBits() / (1 << 8));
}

float Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << 8));
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << (obj.toFloat());
    //std::cout << "\n\n" << (float)obj.fixedP / (float)(1 << obj.fracBit) << "\n\n\n";
    return (os);
}
