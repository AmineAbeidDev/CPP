#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern// : public Form
{
    public:
        Intern(/* args */);
		Intern(const Intern &obj);
		const Intern &operator=(const Intern &obj);
        ~Intern();

        Form *makeForm(std::string name, std::string target);  
};

#endif