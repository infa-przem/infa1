#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

// FUNKCJE
int a,z,n;
int Dane()
{
    int c;
    cin >> c;
    return c;
}

int oblicz(int x, int y)
{
    for(int i=1; i<x; i++)
    {
        z=Dane();
        if(z<y)
        {
            y=z;
        }
    }
    return y;
}

//PROGRAM


int mainn()
{
    n = Dane();
    a = Dane();

    cout << "Najmniesza to: " << oblicz(n,a);
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
