#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat P("test1", 160);
		Bureaucrat S("test2", 0);
		// std::cout << "Bureau " << P.getName() << " Has the grade " << P.getGrade() << std::endl;
		// P.IncGrade();
		// std::cout << "Bureau " << S.getName() << " Has the grade " << S.getGrade() << std::endl;
		// S.IncGrade();

		std::cout << P;
		std::cout << S;
	}
	{
		// Bureaucrat test;
		// std::cout << test << std::endl;
		// test.DecGrade();
		// std::cout << test << std::endl;
		// test.IncGrade();
		// std::cout << test << std::endl;
	}

    return (0);
}
