#include "chef.h"

Chef::Chef(string chefName)
{
    name=chefName;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" dekonstruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
