
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
    float podstawa, p;
    int i, n;
    cout<< "Podaj podstawe";
    cin>>podstawa;
    cout<< "Podaj wykladnik";
    cin>>n;
    if (n==0) p=1;
    else {
        i=1;
        p=1;
        while (i<=n)
        {
            i++;
            p*=podstawa;
        }
    };

    cout << p;












    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

