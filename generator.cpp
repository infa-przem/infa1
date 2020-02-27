
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 int decyzja=1;
 while (decyzja==1) {
        if (decyzja>1) {
            cout << "Blad" << endl;
            return 0;
        }

    // POCZATEK












    /*
    #include <iostream>
    #include <cstdlib>
    #include <ctime>

    using namespace std;

    int main() {
    */
    int liczba, P,L, i, n;
    srand(time(NULL));
    cout << "Podaj L: ";
    cin>>L;
    cout << "Podaj P: ";
    cin>>P;
    cout << "Podaj ile liczb: ";
    cin>>n;
    i=0;
    while (i<n)
    {
        liczba=rand()%(P-L+1)+L;
        if (liczba%3==0 && !(liczba%6==0)) {
            i++;
            cout << liczba << "\n";
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
