#include "car.h"

void car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void car::setModel(const string &newModel)
{
    model = newModel;
}

void car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void car::printData()
{
    cout<<"Car is "<<brand<<" "<<model<<" and year model is "<<yearModel<<endl;
}

car::car() {}

car::car(string nBrand, string nModel, int nYearModel)
{
    brand = nBrand;
    model = nModel;
    yearModel = nYearModel;
}
