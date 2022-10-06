#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int RobotomyRequestForm::i = 0;

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    this->target = "{NO TARGET SPECIFIED}";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	this->target = obj.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
    	if (this->getSign() == false || executor.getGrade() > this->getGradeToExec())
        	throw (gradeTooLowException);

		std::cout << "* [DRILLING NOISES] *" << std::endl;
		if (RobotomyRequestForm::i % 2)
        	std::cout << this->target << " has been robotomized successfully\n" << std::endl;
    	else
        	std::cout << "Robotomy failed\n" << std::endl;
    	RobotomyRequestForm::i++;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
