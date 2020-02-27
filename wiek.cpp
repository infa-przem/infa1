
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

    float x;
    cout << "Wpisz wartosc x" << endl;
    cin >> x;
    if (x==-2)
    {
        cout<< "blad";
    }
    else
    {
        x=(3*pow(x, 5)-pow(x,3)+7)/(x+2);
        cout << "Wynik wynosi " << x;
    }



    // return 0 };

































    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
