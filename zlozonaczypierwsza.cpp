
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
    int l, licznik;
    cout << "Podaj liczbe: " << endl;
    cin >> l;
    licznik=0;
    for (int i=1; l>=i; i++)
    {
        if (l%i==0)
        {
            licznik++;
            cout<< i;
        }
        if (licznik==2)
        {
            i=l+1;
        }
    }
    if (licznik==1) cout << "liczba pierwsza";
    if (licznik==2) cout << "liczba zlozona";









    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
