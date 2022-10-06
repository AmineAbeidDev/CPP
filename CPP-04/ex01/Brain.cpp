#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default contructor has been called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor has been called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}
