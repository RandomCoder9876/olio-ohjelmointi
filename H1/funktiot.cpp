#include "funktiot.h"
//#include <stdexcept>
#include <iomanip>

void calcSum(int a, int b){
    // lasketaan summa ja tulostetaan se
    cout << a+b;
}

void calcDiv(int jaettava, int jakaja){
    // lasketaan jakolasku ja tulostetaan se
    if(jakaja==0){ // virheilmoitus, jos jakaja on nolla
        //throw std::runtime_error("jakaja ei saa olla negatiivinen.");
        cout << "Nollalla ei saa jakaa" << endl;
    }
    else{
        cout << fixed;
        cout << setprecision(2);
        cout << static_cast<float>(jaettava)/static_cast<float>(jakaja);
    }
}

int retSum(int a, int b){
    // lasketaan summa ja palautetaan sen tulos
    return a+b;
}

float retDiv(int jaettava, int jakaja){
    // lasketaan jakolasku ja palautetaan sen tulos
    if(jakaja==0){ // virheilmoitus, jos jakaja on nolla
        //throw std::runtime_error("jakaja ei saa olla negatiivinen.");
        cout << "Nollalla ei saa jakaa" << endl;
        return 0;
    }
    else{
        return static_cast<float>(jaettava)/static_cast<float>(jakaja);
    }
}
