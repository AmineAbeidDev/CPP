#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

Form *Intern::makeForm(std::string name, std::string target) 
{
	Form *form[3];
	std::string forms[3];

	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidental pardon";

	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentalPardonForm(target);

	for (int i = 0; i < 3; ++i)
	{
		if (name == forms[i])
		{
			for (int j = 0; j < 3; ++j)
				if (i != j)
					delete form[j];
			std::cout << "Intern creates " + name << std::endl;
			return (form[i]);
		}
	}
	for (int i = 0; i < 3; ++i)
		delete (form[i]);
	std::cout << "FORM'S TYPE IS NOT RECOGNIZED !!!\n\nYOU NEED TO CHOOSE ONE IF THE THREE RECOGNIZED FORMS:\n\t+ \"shrubbery creation\"\n\t+ \"robotomy request\"\n\t+ \"presidental pardon\"\n" << std::endl;
	return (NULL);
}

Intern::Intern(/* args */)
{
}

const Intern &Intern::operator=(const Intern &obj)
{
	return (obj);
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern::~Intern()
{

}