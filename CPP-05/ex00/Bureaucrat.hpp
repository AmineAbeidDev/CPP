#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade; //? 1 ~ 150
public:
    void setGrade(int grade);
    int			getGrade(void) const;
    std::string getName(void) const;

	GradeTooHighException	gradeTooHighException;
	GradeTooLowException	gradeTooLowException;

    void IncGrade();
    void DecGrade();

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
	Bureaucrat &operator=(const Bureaucrat &obj);
	Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat();
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif
