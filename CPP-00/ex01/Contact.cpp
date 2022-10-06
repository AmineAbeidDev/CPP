#include "Contact.hpp"

void Contact::setFirstName(std::string fName)
{
    this->firstName = fName;
}
void Contact::setLastName(std::string lName)
{
    this->lastName = lName;
}
void Contact::setNickName(std::string nName)
{
    this->nickName = nName;
}
void Contact::setPhoneNumber(std::string phoneNum)
{
    this->phoneNumber = phoneNum;
}
void Contact::setDarkestSecret(std::string darkSec)
{
    this->darkestSecret = darkSec;    
}

std::string Contact::getFirstName(void)
{
    return (this->firstName);
}

std::string Contact::getLastName(void)
{
    return (this->lastName);
}

std::string Contact::getNickName(void)
{
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->darkestSecret);
}
