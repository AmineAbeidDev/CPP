#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		// Cat cat;
		// Dog dog;
		// //Animal test; //! ERROR !

		// std::cout << cat.getType() << " says: " << std::ends;
		// cat.makeSound();
		// std::cout << dog.getType() << " says: " << std::ends;
		// dog.makeSound();
	}
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();

		delete i;
		delete j;
	}
    return (0);
}
