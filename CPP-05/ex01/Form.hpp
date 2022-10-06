#ifndef FORM_HPP
#define FORM_HPP
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
		~Form();
		Form(std::string name, int GTS, int GTE);

		const std::string   getName() const;
		bool                getSign();
		int           getGradeToSign() const;
		int           getGradeToExec() const;

		GradeTooHighException	gradeTooHighException;
		GradeTooLowException	gradeTooLowException;
<<<<<<< HEAD
=======

		void beSigned(Bureaucrat obj);
		void signForm(Bureaucrat obj);
>>>>>>> 3f931d4 (:))

		void beSigned(Bureaucrat &obj);
};

    std::ostream &operator<<(std::ostream &os, Form &obj);

#endif