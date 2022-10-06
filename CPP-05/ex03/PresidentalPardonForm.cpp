#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm() : Form("PresidentalPardonForm", 25, 5)
{
    this->target = "{NO TARGET SPECIFIED}";
}
PresidentalPardonForm::PresidentalPardonForm(std::string target) : Form("PresidentalPardonForm", 25, 5)
{
    this->target = target;
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm &obj)
{
	*this = obj;
}

PresidentalPardonForm &PresidentalPardonForm::operator=(const PresidentalPardonForm &obj)
{
	this->target = obj.target;
	return (*this);
}

PresidentalPardonForm::~PresidentalPardonForm()
{
}

void PresidentalPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
    	if (this->getSign() == false || executor.getGrade() > this->getGradeToExec())
        	throw (gradeTooLowException);
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
