#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE

void Dane(float &x, float &y, float &z)
{
    cout << "Podaj liczbe ";
    cin >> x;
    cout << "Podaj liczbe ";
    cin >> y;
    cout << "Podaj liczbe ";
    cin >> z;
}

float wyznacznik(float x, float y, float w, float z)
{
    return x*z-y*w;
}

float wynik(float x, float y)
{
    return x/y;
}



//PROGRAM



int mainn()
{
    float a1,a2,b1,b2,c1,c2,wg,wx,wy,xx,yy;
    Dane(a1,b1,c1);
    Dane(a2,b2,c2);
    wg = wyznacznik(a1,a1,b1,b2);
    wx = wyznacznik(c1,c2,b1,b2);
    wy = wyznacznik(a1,a2,c1,c2);
    if (wg!=0) {
        xx = wynik(wx, wg);
        yy = wynik(wy, wg);
        cout << endl << "x = " << xx;
        cout << endl << "y = " << yy;
    }

    if (wg==0 & wx==0 & wy==0)
    {
        cout << "TOZSAMY!!!!!";
    }
    if (wg==0 & (wx==0 || wy==0))
    {
        cout << "SPRZECZNY!!!";
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
