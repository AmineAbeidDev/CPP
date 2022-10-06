#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

int main(void)
{
	// Bureaucrat bureau("Jeff", 146);
	//Bureaucrat bureau("Jeff", 138);
	//ShrubberyCreationForm testForm("Central Park");

	// Bureaucrat bureau("Jeff", 73);
	//Bureaucrat bureau("Jeff", 46);
	//RobotomyRequestForm testForm("Central Park");

	//Bureaucrat bureau("Jeff", 26);
	Bureaucrat bureau("Jeff", 6);
	PresidentalPardonForm testForm("Central Park");

	std::cout << "\nbeSigned: ";
	testForm.beSigned(bureau);
	std::cout << "\nexecuteForm: ";
	bureau.executeForm(testForm);

	bureau.IncGrade();

	std::cout << "\nexecuteForm: ";
	bureau.executeForm(testForm);

	std::cout << std::endl;

	// for (int i = 0; i < 2; ++i)
	// {
	// 	testForm.execute(bureau);
	// 	bureau.executeForm(testForm);
	// 	std::cout << std::endl;
	// }
    return (0);
}
