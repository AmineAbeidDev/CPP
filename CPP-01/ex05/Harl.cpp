#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int     i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void(Harl::*x)();

    x func;
    for (i = 0; i < 4; i++)
        if (level == levels[i])
            break ;
    switch (i)
    {
        case 0:
            func = &Harl::debug;
            break ;
        case 1:
            func = &Harl::info;
            break ;
        case 2:
            func = &Harl::warning;
            break ;
        case 3:
            func = &Harl::error;
            break;
        default:
            std::cout << "He is probably chocking on that beacon XD" << std::endl;
    }
    //&x();
    if (func)
        (this->*(func))();
}