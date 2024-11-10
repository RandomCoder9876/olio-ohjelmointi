#include "italianchef.h"

ItalianChef::ItalianChef(string iChefName) : Chef(iChefName)
{
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" dekonstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
