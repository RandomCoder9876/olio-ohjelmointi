#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    // VAIHE 1
    cout << "********************VAIHE 1********************" << endl;

    //luodaan muuttujat
    int a = 5;
    int b = 10;

    //tulostetaan arvot ja osoitteet
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    //luodaan pointteri
    int* myPointer = &a;

    //tulostetaan pointterin tiedot
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    //sijoitetaan osoittimeen myPointer muuttujan b
    myPointer = &b;

    //tulostetaan pointterin tiedot
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    //luodaan referenssi
    int &refA = a;

    //tulostetaan referenssin tiedot
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on:  " << refA << endl;
    cout << endl;

    //kokeillaan muuttaa refA b:hen
    //&refA = b; // ei toimi


    // VAIHE 2
    cout << "********************VAIHE 2********************" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;


    // VAIHE 3
    cout << endl;
    cout << "********************VAIHE 3********************" << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
