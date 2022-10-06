#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                sign;
        const int           gradeToSign;
        const int           gradeToExec;
    public:
        Form();
		Form(const Form &obj);
		Form &operator=(const Form &obj);
        virtual ~Form();
        Form(std::string name, int GTS, int GTE);

        virtual std::string   getName() const;
        virtual bool          getSign() const;
        virtual int           getGradeToSign() const;
        virtual int           getGradeToExec() const;


        GradeTooHighException	gradeTooHighException;
		GradeTooLowException	gradeTooLowException;

        void beSigned(Bureaucrat &obj);

        virtual void execute(Bureaucrat const & executor) const = 0;
};

    std::ostream &operator<<(std::ostream &os, Form &obj);

#endif