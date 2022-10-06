#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTS 8
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact		Contact[8];
    int			contactSum;
    int         contactIdx;
public:
    void add();
    void search();
    void print_contacts();
    void manager(PhoneBook PhoneBook);
    PhoneBook();
};

#endif
