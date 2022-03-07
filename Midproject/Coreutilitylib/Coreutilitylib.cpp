// Coreutilitylib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Coreutilitylib.h"
#include <iostream>

#include <boost/locale.hpp>


using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
COREUTILITYLIB_API int nCoreutilitylib=0;

// This is an example of an exported function.
COREUTILITYLIB_API int fnCoreutilitylib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.




void Coreutilitylib::Ccoreutilitylib::generatenewaccountno(void)
{
    generator gen;
    gen.add_messages_path("C:\\Users\\Pavan\\source\\repos\\Mid project\\Coreutilitylib");
    gen.add_messages_domain("Core");

    locale::global(gen("de_DE.UTF-8"));

    //locale::global(gen(""));    
    cout.imbue(std::locale());
    std::cout << translate("Generate account from core utility lib is being called ") << endl;

    
}

void Coreutilitylib::Ccoreutilitylib::generateaccountfortrading(void)
{
    std::cout << " Create trading account number is being called from coreutility lib\n";
}
