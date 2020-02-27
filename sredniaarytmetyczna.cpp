
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
    int ile,i;
    float liczba,s;
    cout<< "Podaj ile liczb ";
    cin>>ile;
    i=0;
    s=0;
    do {
            i++;
            cout << "Podaj liczbe ";
            cin>>liczba;
            s+=liczba;
    } while(i!=ile);
    /*
    while(i<ile)
    {
            i++;
            cout << "Podaj liczbe ";
            cin>>liczba;
            s+=liczba;
    } */
    s/=ile;
    cout << "Srednia= " << s;











    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
