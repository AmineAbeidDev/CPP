#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat testB("TestB1", 34);
	Form testF("Central Park", 33, 33);

	std::cout << testB << std::endl;
	std::cout << testF << std::endl;

	testF.beSigned(testB);
	testB.signForm(testF);

	testB.IncGrade();

	testF.beSigned(testB);
	testB.signForm(testF);

	std::cout << testB << std::endl;
    return (0);
}