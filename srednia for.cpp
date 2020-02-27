
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
    int n;
    float s, liczba;
    cout<< "Podaj ilosc";
    cin>>n;
    s=0;
    for (int i=1; i<=n; i++)
    {
        cout << "Podaj liczbe";
        cin>>liczba;
        s+=liczba;
    }
    s=s/n;


    cout << s;












    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

