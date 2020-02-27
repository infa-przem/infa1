
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















    /*
    include <iostream>
    #include <math.h>

    using namespace std;

    int main() {
    */

    float a, h, p, l;
    cout << "Wpisz wysokosc trojkata " << endl;
    cin >> h;
    if(h>=0)
        {
        a=(2*h)/sqrt(3);
        p=(pow(a,2)*sqrt(3))/4;
        l=3*a;
    cout << "Pole powierzchni trojkata rownobocznego o wysokosci h wynosi: " << p << endl;
    cout << "Obwod tego trojkata " << l << endl;
        }
        else
        {
            cout << "Podaj poprawne dane";

        };
    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
