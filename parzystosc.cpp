
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

    int a;
    cout << "Podaj liczbe: ";
    cin>>a;
    a=a%2;
    if(a==0)
    {
        cout << "Liczba jest parzysta";
    }
    else
    {
        cout << "Liczba jest NIEparzysta";
    }
    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
