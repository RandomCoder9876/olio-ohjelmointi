#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    //luodaan Car-olio
    Car objCar("Toyota", "Corolla");

    //kutsutaan Car-olion setEngine metodia
    objCar.setEngine();

    //kutsutaan Car-olion setWheels metodia
    objCar.setWheels();

    // tulostetaan auton tiedot
    objCar.printDetails();

    return 0;
}
