#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    car();
    car(string, string, int);
    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
    void printData();
};

#endif // CAR_H
