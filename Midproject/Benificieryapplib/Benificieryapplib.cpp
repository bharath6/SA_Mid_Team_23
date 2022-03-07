// Benificieryapplib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Benificieryapplib.h"
#include <iostream>
#include "../Detailsapplicationlib/Detailsapplicationlib.h"

#include <boost/locale.hpp>


using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
BENIFICIERYAPPLIB_API int nBenificieryapplib=0;

// This is an example of an exported function.
BENIFICIERYAPPLIB_API int fnBenificieryapplib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.


void Benificieryapplib::CBenificieryapplib::Benficieryadd(void)
{

    generator gen;
    gen.add_messages_path("C:\\Users\\Pavan\\source\\repos\\Mid project\\Benificieryapplib");
    gen.add_messages_domain("benef");

    locale::global(gen("de_DE.UTF-8"));

    //locale::global(gen(""));    
    cout.imbue(std::locale());
    std::cout << translate("This is executed from Detailslibrary from application libraries") << endl;

 
    DetailsApplicationlibrary::CDetailsapplication::details();

}
