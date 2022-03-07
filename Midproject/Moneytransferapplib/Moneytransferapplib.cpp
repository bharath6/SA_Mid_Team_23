// Moneytransferapplib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Moneytransferapplib.h"
#include <iostream>


// This is an example of an exported variable
MONEYTRANSFERAPPLIB_API int nMoneytransferapplib=0;

// This is an example of an exported function.
MONEYTRANSFERAPPLIB_API int fnMoneytransferapplib(void)
{
    return 0;
}



void Moneytransferapplib::CMoneytransferapplib::moneytransfer(void)
{
    std::cout << "\nEnter account number of the receiver";
    std::cout << "\nThis is executed from Moneytransfer library from application layer";
}
