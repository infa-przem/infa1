#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;


// FUNKCJE

//PROGRAM



int mainn()
{
    int  P,L,n;
    float suma=0.00;
    srand(time(NULL));
    cout << "Podaj L: ";
    cin>>L;
    cout << "Podaj P: ";
    cin>>P;
    cout << "Podaj ile liczb: ";
    cin>>n;
    int tab[101];
    for (int i=0; i<n; i++)
    {
        tab[i]=rand()%(P-L+1)+L;
        cout <<" " << tab[i] << " ";
        suma+=tab[i];
    }
    cout << "Suma: " << suma << endl;
    cout << "Srednia arytmetyczna: " << suma/n;
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
        if (qwerty!=1) return 0;
    }
}
