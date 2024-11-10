#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main()
{
    // animal olio osoitin
    Animal *objAnimal = new Animal;

    // dog olio osoitin
    Dog *objDog = new Dog;

    // kutsutaan Animal-luokan ilmentymän callOut
    cout<<"Animal-luokan callOut kutsu: "<<endl;
    objAnimal->callOut();

    // kutsutaan Dog-luokan ilmentymän callOut
    cout<<"Dog-luokan callOut kutsu: "<<endl;
    objDog->callOut();

    // tuhotaan oliot
    delete objAnimal;
    objAnimal = nullptr;
    delete objDog;
    objDog = nullptr;

    return 0;
}
