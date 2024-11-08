#include <car.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "----------- VAIHE 1 -----------" << endl;

    //luodaan car olio
    car objCar;

    //asetetaan autontiedot
    objCar.setBrand("Audi");
    objCar.setModel("A4");
    objCar.setYearModel(2012);

    //tulostetaan auton tiedot
    objCar.printData();

    cout << "----------- VAIHE 2 -----------" << endl;
    cout << "Hello World!" << endl;
    return 0;
}
