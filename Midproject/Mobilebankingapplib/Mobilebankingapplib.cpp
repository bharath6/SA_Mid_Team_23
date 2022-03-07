// Mobilebankingapplib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Mobilebankingapplib.h"
#include <iostream>
#include "../Moneytransferapplib/Moneytransferapplib.h"


// This is an example of an exported variable
MOBILEBANKINGAPPLIB_API int nMobilebankingapplib=0;

// This is an example of an exported function.
MOBILEBANKINGAPPLIB_API int fnMobilebankingapplib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.


void Mobilebankingapplib::CMobilebankingapplib::Openmobileaccount(void)
{
    std::cout << "\n Registeration for mobile banking";

    std::cout << "\n This is executed from mobile banking lib from application libs";

    Moneytransferapplib::CMoneytransferapplib::moneytransfer();
}
