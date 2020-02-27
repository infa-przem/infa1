
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

    int n, il;
    cout << "Wpisz n: ";
    cin>>n;
    il=n;
    if (n>2) {
    for (int i=2; i<=n; i=i+2)
    {
        il=il*i;
    }
    cout << "Suma kwadratow: " << il;
    }
    else
    {
        cout << "Blad danych";
    }










    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
