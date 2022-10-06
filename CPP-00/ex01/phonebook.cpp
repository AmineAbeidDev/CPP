#include "PhoneBook.hpp"

void PhoneBook::search()
{
	std::string in;
	int	idx;

    PhoneBook::print_contacts();
	std::cout << "Enter Your Contact's Index: ";
	getline(std::cin, in);
	idx = std::atoi(in.c_str());
	if (idx > 0 && --idx < contactSum)
		std::cout << "\n"	<< "First Name:\t"		<< Contact[idx].getFirstName()		<< "\n"
							<< "Last Name:\t"		<< Contact[idx].getLastName()		<< "\n"
							<< "Nick Name:\t"		<< Contact[idx].getNickName()		<< "\n"
							<< "Phone Number:\t"	<< Contact[idx].getPhoneNumber()	<< "\n"
							<< "Darkest Secret:\t"	<< Contact[idx].getDarkestSecret()	<< "\n"
							<< std::endl;
	else
		std::cout << "Invalid Index!" << std::endl;
}

std::string initializer(std::string msg, std::string str)
{
    std::cout << msg;
    std::getline(std::cin, str);
    return (str);
}

void PhoneBook::add()
{
    std::string str;

    str = initializer("First Name: ", str);
    if (str.empty())
        return ;
	Contact[contactIdx].setFirstName(str);

    str = initializer("Last Name: ", str);
    if (str.empty())
        return ;
	Contact[contactIdx].setLastName(str);

    str = initializer("Nick Name: ", str);
    if (str.empty())
        return ;
	Contact[contactIdx].setNickName(str);

    str = initializer("Phone Number: ", str);
    if (str.empty())
        return ;
	Contact[contactIdx].setPhoneNumber(str);

    str = initializer("Darkest Secret: ", str);
    if (str.empty())
        return ;
	Contact[contactIdx].setDarkestSecret(str);

	if (contactSum != 8)
    	contactSum++;
    if (++contactIdx == MAX_CONTS)
        contactIdx = 0;
}

void printer(std::string string)
{
	if (string.length() > 10){
		string.resize(9);
		std::cout << string;
		std::cout << ".";
	}
	else if (string.length() <= 10){
				std::cout << std::setw(10);
			    std::cout << string;
		}
}

void PhoneBook::print_contacts()
{
	std::cout << "\nContacts: \n";
    for (int i = 0; i < contactSum; ++i)
	{
        std::cout << std::setw(10) << (i + 1);
        std::cout << "|";
		printer(Contact[i].getFirstName());
		std::cout << "|";
		printer(Contact[i].getLastName());
		std::cout << "|";
		printer(Contact[i].getNickName());
		std::cout << "\n";
	}
	std::cout << std::endl;
}

PhoneBook::PhoneBook()
{
    contactSum = 0;
    contactIdx = 0;
}

void PhoneBook::manager(PhoneBook PhoneBook)
{
    std::string cmd;

    while (true)
    {
        std::cout << ">> ";
        getline(std::cin, cmd);
        if (cmd == "ADD")
            PhoneBook.add();
        else if (cmd == "SEARCH")
            PhoneBook.search();
        else if (cmd == "EXIT")
            break ;
    }
}

int main (void)
{
    PhoneBook PhoneBook;
    
    std::cout << "##########################################\n";
    std::cout << "# Leaving one filed empty will cancel    #\n";
    std::cout << "# adding a contact to your PhoneBook     #\n";
    std::cout << "#                                        #\n";
    std::cout << "# >> \"ADD\" to add a contact              #\n";
    std::cout << "# >> \"SEARCH\" to display you contacts    #\n";
    std::cout << "# >> \"EXIT\" to exit the program          #\n";
    std::cout << "##########################################\n" << std::endl;

    PhoneBook.manager(PhoneBook);
    return (0);
}