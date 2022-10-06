#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <fstream>
#include <iostream>
#include "Form.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

class Form;

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

    void executeForm(Form const & form);
	void signForm(Form &obj);

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
    ~Bureaucrat();
};
    std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif
