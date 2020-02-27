
#include <iostream>
#include <math.h>

using namespace std;

int Dane()
{
    int liczba;
    cout << "Podaj liczbe naturalna";
    cin >> liczba;
    return liczba;
}


float silnia(int l) {
    float s, liczba;
    s=1;
    for (int i=1; i<=l; i++)
    {
        s*=i;
    }
    return s;
}



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
    int n=Dane();
    int k=Dane();
    long int w;
    w=silnia(n)/silnia(k)*silnia(n-k);
    cout << w;































    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
