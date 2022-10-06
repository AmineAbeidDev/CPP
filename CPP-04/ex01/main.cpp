#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void f()
{
    // const Animal* i = new Cat();
    // const Animal* j = new Dog();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();

	// delete i;
	// delete j;

	// int     sum = 2;
    // Animal  *animals[sum];

    // //Dog *f = new Dog; //! SHALLOW COPY

    // for(int i = 0; i < sum / 2; ++i)
    // {
    //     std::cout << "\nBeen Here 1\n" << std::endl;  
    //     animals[i] = new Dog();
    //     //animals[i] = f; //! SHALLOW COPY
    // }

    // for(int i = sum / 2; i < sum; ++i)
    // {
    //     std::cout << "\nBeen Here 2\n" << std::endl;  
    //     animals[i] = new Cat();
    //     //animals[i] = f; //! SHALLOW COPY
    // }

    // std::cout << "\nCreation has ended\n" << std::endl; 
 
    // for (int i = 0; i < sum; ++i)
    // {
    //     //std::cout << "\naddress[" << i << "]: " << animals[i]->getType() << " {" << &animals[i]->getType() << "}\n" << std::endl; //? ADDRESSES PRINTER
    //     delete animals[i];
	Cat obj;
	{
		Cat tmp = obj;
	}
    // }
}

int main()
{	
	f();
	system("leaks Animal");
	return (0);
}