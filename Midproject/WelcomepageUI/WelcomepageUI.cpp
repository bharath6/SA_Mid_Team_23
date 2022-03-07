// WelcomepageUI.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "WelcomepageUI.h"
#include <iostream>
#include "../Detailsapplicationlib/Detailsapplicationlib.h"
#include "../Coreutilitylib/Coreutilitylib.h"
#include "../Mobilebankingapplib/Mobilebankingapplib.h"


// This is an example of an exported variable
WELCOMEPAGEUI_API int nWelcomepageUI=0;

// This is an example of an exported function.
WELCOMEPAGEUI_API int fnWelcomepageUI(void)
{
    return 0;
}

void welcomepageUIlibrary::CWelcomepageUI::homepage(void)
{
    std::cout << "\nThis account belongs to number 12345";

    std::cout << "\nThis is executed from UI library";

    
}
void welcomepageUIlibrary::CWelcomepageUI::showdetails(void)
{
    std::cout << " Details in welcomeUI library is being called\n";

    DetailsApplicationlibrary::CDetailsapplication::details();
}
void welcomepageUIlibrary::CWelcomepageUI::createaccount(void)
{
    std::cout << " \n create account method from welcomeui is being called";

    Coreutilitylib::Ccoreutilitylib::generatenewaccountno();


}

void welcomepageUIlibrary::CWelcomepageUI::mobilebanking(void)
{
    Mobilebankingapplib::CMobilebankingapplib::Openmobileaccount();
}
