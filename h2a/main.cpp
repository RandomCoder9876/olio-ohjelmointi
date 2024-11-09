#include "rectangle.h"
#include "student.h"
#include "car.h"

#include <iostream>
#include <memory>

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

    //luodaan Rectangle olio kekomuistiin
    Rectangle *objRectangle = new Rectangle;

    // annetaan suorakulmion mitat
    objRectangle->setWidth(2);
    objRectangle->setHeight(5);

    //tulostetaan suorakulmion pinta-ala ja ympärysmitta
    objRectangle->getArea();
    objRectangle->getCircum();

    //tuhotaan Rectangle olio
    delete objRectangle;
    objRectangle = nullptr;

    cout << "----------- VAIHE 3 -----------" << endl;

    // luodaan Student olio smart pointterillla
    unique_ptr<Student> objStudent = make_unique<Student>();

    //asetetaan nimi, opiskelijanumero ja keskiarvo
    objStudent->setName("Matti Virtanen");
    objStudent->setStudentNumber(22334455);
    objStudent->setAverage(4.1);

    // tulostetaan opiskelijan tiedot
    cout<<"Opiskelijan nimi on "<<objStudent->getName()<<", opiskelijanumero on "<<objStudent->getStudentNumber()<<" ja keskiarvo on "<<objStudent->getAverage()<<endl;

    return 0;
}
