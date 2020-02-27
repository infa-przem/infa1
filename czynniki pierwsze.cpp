#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE



//PROGRAM



int mainn()
{
    int a, liczba;
    cin >> a;
    liczba=a;
    for (int i=2; i<=liczba; i++)
    {
        while (a%i==0)
        {
            cout << " " << i  << " ";
            a=a/i;
        }
    }


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
