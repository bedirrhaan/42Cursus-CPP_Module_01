#include "Harl.hpp"
#include <cstring>

Harl::Harl()
{
    std::cout << "Constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor called" << std::endl;
}

void    Harl::debug()
{
    std::cout << "[ DEBUG ] message" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ] message" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ] message" << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ] message" << std::endl;
}

void    Harl::complain(std::string level)
{
    const char* av[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    void (Harl::*command[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (i = 0; i < 4; ++i)
    {
        if (strcmp(level.c_str(), av[i]) == 0)
        {
            (this->*command[i])();
            return;
        }
    }

    std::cerr << "[ ERROR ]\n" << "Just use: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"" << std::endl;
}
