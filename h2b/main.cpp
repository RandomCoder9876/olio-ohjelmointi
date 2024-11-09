#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // luodaan autolista
    vector<car> carList;

    // luodaan car oliota
    car objCar1("Audi", "A4", 2012);
    car objCar2("BMW", "M5", 2022);
    car objCar3("Honda", "Civic", 1998);

    // lisätään oliot listaan
    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    // tulostetaan listan toisen alkion tiedot
    cout << "Listan toisen alkion tiedot:" << endl;
    carList[1].printData();

    // tulostetaan listan kaikkien autojen tiedot
    cout <<"----------------------------------------" << endl;
    cout << "Kaikkien autojen tiedot:" << endl;
    for(int i =0; i<=2;i++){
        carList[i].printData();
    }

    return 0;
}
