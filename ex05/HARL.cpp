#include "HARL.hpp"
#include <cstring>

HARL::HARL()
{
    std::cout << "Constructor called" << std::endl;
}

HARL::~HARL()
{
    std::cout << "Destructor called" << std::endl;
}

void    HARL::debug()
{
    std::cout << "[ DEBUG ] message" << std::endl;
}

void    HARL::info(void)
{
    std::cout << "[ INFO ] message" << std::endl;
}

void    HARL::warning()
{
    std::cout << "[ WARNING ] message" << std::endl;
}

void    HARL::error()
{
    std::cout << "[ ERROR ] message" << std::endl;
}

void    HARL::complain(std::string level)
{
    const char* av[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    void (HARL::*command[4])(void) = {&HARL::debug, &HARL::info, &HARL::warning, &HARL::error};

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

