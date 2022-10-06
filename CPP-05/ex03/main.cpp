#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"

void f()
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat b("test", 1);

	if (rrf)
		rrf->beSigned(b);

	if (rrf != NULL)
	{
		rrf->execute(b);
		rrf->execute(b);
	}
	if (rrf != NULL)
		delete (rrf);
	system ("leaks Bureau");
}

int main(void)
{
	f();
    return (0);
}
