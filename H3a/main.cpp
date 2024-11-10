#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    // Kantaluokkav chef
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();

    cout<<"------------------------------------------"<<endl;

    // Aliluokan ItalianChef
    ItalianChef objChef2("Anthony Bourdain");
    objChef2.makeSalad();
    objChef2.makeSoup();
    objChef2.makePasta();
    cout<<"Name of Italian Chef is "<<objChef2.getName()<<endl;

    return 0;
}
