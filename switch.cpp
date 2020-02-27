
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
    int liczba;
    cout << "Podaj liczbe";
    cin >> liczba;
    switch(liczba)
    {
    case 2:
            cout << "dwa";
            break;
    case 1:
            cout << "jeden";
            break;
    case 3:
            cout << "trzy";
            break;
    default:
        cout << "ani jeden, ani dwa,  ani trzy";
        break;

    }

    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
