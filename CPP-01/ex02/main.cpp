#include <iostream>

int main (void)
{
    std::string var = "HI THIS IS BRAIN";
    std::string	*stringPTR = &var;
    std::string &stringREF= var;

    std::cout << "\nOriginal address:\t" << &var << std::endl;
    std::cout << "Pointer:\t\t" << stringPTR << std::endl;
    std::cout << "refrence:\t\t"<< &stringREF << "\n" << std::endl;

    std::cout << "Original address:\t" << var << std::endl;
    std::cout << "Pointer:\t\t" << *stringPTR << std::endl;
    std::cout << "refrence:\t\t" << stringREF << std::endl << std::endl;	
}