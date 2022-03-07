// Createtradingapplib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Createtradingapplib.h"
#include <iostream>
#include "../Coreutilitylib/Coreutilitylib.h"


// This is an example of an exported variable
CREATETRADINGAPPLIB_API int nCreatetradingapplib=0;

// This is an example of an exported function.
CREATETRADINGAPPLIB_API int fnCreatetradingapplib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.




void Createtradingapplib::CCreatetradingapplib::createtradingacc(void)
{
    

    std::cout << "\nSSN Details for creating trading account";

    std::cout << "\nThis is executed from createtrading library fro applications libs";

    Coreutilitylib::Ccoreutilitylib::generateaccountfortrading();
}
