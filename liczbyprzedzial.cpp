
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
    int l, p, d;
    cout << "Od: " << endl;
    cin >> l;
    cout << "Do: " << endl;
    cin >> p;
    cout << "Dzielnik: " << endl;
    cin >> d;
    while (d==0)
    {
        cout << "Dzielnik nie moze wynosic zero, wpisz jeszcze raz";
        cout << "Dzielnik: " << endl;
        cin >> d;
    }
    for (int i=l; i<=p; i++)
    {
        if (i%d==0)
        {
            cout << i << endl;
        }
    }









    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
