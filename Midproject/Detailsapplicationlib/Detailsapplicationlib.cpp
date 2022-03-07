// Detailsapplicationlib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Detailsapplicationlib.h"
#include <iostream>


// This is an example of an exported variable
DETAILSAPPLICATIONLIB_API int nDetailsapplicationlib=0;

// This is an example of an exported function.
DETAILSAPPLICATIONLIB_API int fnDetailsapplicationlib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.

void DetailsApplicationlibrary::CDetailsapplication::details(void)
{
    std::cout << "\nShowing user details ";

    std::cout << " \nName \n gender \n address\n IFSC";

    std::cout << "\nThis is executing from Details library from Application libs";
}
