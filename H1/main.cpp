#include <iostream>
#include "funktiot.h"
#include <iomanip>

using namespace std;

int main()
{
    int a;
    int b;

    //kysytään luku a ja luetaan muistiin
    cout << "Anna luku a:" << endl;
    cin >> a;

    //kysytään luku b ja luetaan muistiin
    cout << "Anna luku b:" << endl;
    cin >> b;

    cout << "Vaihe 2" << endl;
    cout << "Lukujen summa on ";
    calcSum(a,b);
    cout << endl;

    cout << "Lukujen osamaara on ";
    calcDiv(a,b);
    cout << endl;

    cout << "Vaihe 3" << endl;
    cout << "Lukujen summa on " << retSum(a,b) << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "Lukujen osamaara on " << retDiv(a,b) << endl;

    return 0;
}
