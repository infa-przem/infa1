
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

    float x, w;
    cout << "w(x)=(x-1)(x-2)(x-3)" << "\nWpisz x ";
    cin >> x;
    w =(x-1)*(x-2)*(x-3);
    cout << "Wynik to " << endl << w;

    // KONIEC


    cout << endl << endl << endl << "Powtorzyc?";
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
