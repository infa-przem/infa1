
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 int decyzja=1;
 while (decyzja>=1) {
        if (decyzja>1) {
            cout << "Blad" << endl;
            return 0;
        }

    // POCZATEK

    float p, l, r;
    cout << "Pole = ";
    cin >> p;
    r= sqrt(p/M_PI);
    l= 2*M_PI*r;

    cout << "promien = " << r << endl;
    cout << "obwod = " << l << endl;
    // return 0;
    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
