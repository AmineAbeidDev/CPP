#include "Form.hpp"

Form::Form(std::string name, int GTS, int GTE) : name(name), gradeToSign(GTS), gradeToExec(GTE)
{
	this->sign = false;
	try
	{
		if (GTS > 150 || GTE > 150)
			throw (Form::gradeTooLowException);
		else if (GTS < 1 || GTE < 1)
			throw (Form::gradeTooHighException);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form() : name("{NAME_NOT_ASSIGNED}"), gradeToSign(0), gradeToExec(0)
{
    this->sign = false;
}

Form::Form(const Form &obj) : name(obj.name), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
	*this = obj;
}

Form &Form::operator=(const Form &obj)
{
	this->sign = obj.sign;
	return (*this);
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &os, Form &obj)
{
    std::cout << "\nForm Infos:\n" << "\tNAME: " << obj.getName() << "\n\tSIGN STATE: " << obj.getSign() << "\n\tGRADE REQUIRED TO SIGN IT: " << obj.getGradeToSign() << "\n\tGRADE REQUIRED TO EXECUTE IT: " << obj.getGradeToExec() << "\n" << std::endl;
    return (os);
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExec() const
{
    return (this->gradeToExec);
}

void Form::beSigned(Bureaucrat &obj)
{
    try
	{
		if (obj.getGrade() <= this->getGradeToSign())
			this->sign = true;
		else
			throw (Form::gradeTooLowException);
		obj.signForm(*this);
	}
	catch (std::exception & e)
    {
    	std::cout << e.what() << std::endl;
	}
}
