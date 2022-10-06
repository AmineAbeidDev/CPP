#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setFirstName(std::string fName);
        void setLastName(std::string lName);
        void setNickName(std::string nName);
        void setPhoneNumber(std::string phoneNum);
        void setDarkestSecret(std::string darkestSec);

        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
};

#endif
