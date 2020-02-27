
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

    float p, a, k, v;
    cout << "Pole calkowite = ";
    cin >> p;
    a = sqrt(p/6);
    v = pow(a, 3);
    k = a*sqrt(3);
    cout << endl << "Obietosc = " << v << endl;
    cout << "Przekatna = " << k << endl;
    // return 0;

    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
