
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
    int liczba, licznik, iloraz, i;;
    cout<< "Podaj liczbe";
    cin>>liczba;
    iloraz=1;
    i=liczba;
    licznik=0;
    if (liczba%1==0 && liczba%liczba==0)
    {
        do {
            if (liczba%iloraz==0)
            {
                licznik++;
            }
            iloraz++;
            i--;
        } while(licznik>2 || i!=1);
        if (licznik==1) cout << "Liczba pierwsza";
        else cout << "Liczba z³o¿ona";
    }
    else
    {
        cout << "Liczba ani tak ani taka";
    }









    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
