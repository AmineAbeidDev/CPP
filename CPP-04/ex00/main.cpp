#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void f()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    //const WrongAnimal* i = new WrongCat();
	//const WrongCat* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound(); //will output the cat sound!

	delete meta;
	delete i;
	delete j;
}

int main()
{
	f();
	//system("leaks Animal");
    return (0);
}