#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP
#include "Form.hpp"

class PresidentalPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentalPardonForm();
        PresidentalPardonForm(std::string target);
		PresidentalPardonForm(const PresidentalPardonForm &obj);
		PresidentalPardonForm &operator=(const PresidentalPardonForm &obj);
        ~PresidentalPardonForm();


        void execute(Bureaucrat const & executor) const;
};

#endif
