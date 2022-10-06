#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("{NOT_ASSIGNED_YET}")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    std::cout << "Bureaucrat contructor has been called" << std::endl;
    this->grade = 150;
    try
    {
        if (grade > 150)
            throw (Bureaucrat::gradeTooLowException);
		else if (grade < 1)
            throw (Bureaucrat::gradeTooHighException);
        else
            this->grade = grade;
    }
    catch (std::exception & e)
    {
    	std::cout << e.what() << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

void Bureaucrat::setGrade(int grade)
{
   this->grade = grade;
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat::IncGrade()
{
    try
    {
        if (grade < 2)
            throw (Bureaucrat::gradeTooHighException);
        else
            this->grade--;
    }
    catch (std::exception & e)
    {
           std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::DecGrade()
{
     try
    {
        if (grade > 149)
            throw (Bureaucrat::gradeTooLowException);
        else
            this->grade++;
        
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;

    return (os);
}

void Bureaucrat::signForm(Form &obj)
{
    if (obj.getSign() == true)
        std::cout << this->getName() << " signed " << obj.getName() << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because of his grade" << std::endl;
}
