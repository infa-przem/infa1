#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE


//PROGRAM



int mainn()
{
    int n,q;
    int tab[101];
    float suma=0.00;
    cout <<"Podaj ile liczb: ";
    cin >> n;
    cout <<"Podaj roznice ";
    cin >> q;
    cout <<"Podaj liczbe pierwsza: ";
    cin >> tab[0];
    suma = tab[0];

    for(int i=1; i<n; i++)
    {
        tab[i]=tab[i-1]*q;
        suma*=tab[i];
    }

    for(int j=n; j>0; j--)
    {
        cout << " " << tab[j-1] << endl;
    }
    cout << "Suma: " << suma << endl;
    cout << "Srednia geometryczna: " << pow(suma, 1/n);
}

// KONIEC PROGRAMU




















int main()
{
    int qwerty = true;
    while (qwerty==true)
    {
        mainn();
        cout << endl <<"Powtorzyc?";
        cin >> qwerty;
        if (qwerty==1) qwerty=true;
        else return 0;
    }
}
