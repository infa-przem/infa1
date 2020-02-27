#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE

void Dane(int &a, int &b, int &c, int &d)
{
    cout << "Podaj liczbe ";
    cin >> a;
    cout << "Podaj liczbe ";
    cin >> b;
    cout << "Podaj liczbe ";
    cin >> c;
    cout << "Podaj liczbe ";
    cin >> d;
}

int NWD(int aa, int bb)
{
    if(aa==bb)
    {
    return aa;
    }
    else {
    do
    {
        if(aa>bb)
        {
            aa=aa-bb;
        }
        else
        {
            bb=bb-aa;
        }
    } while (aa!=bb);
    return aa;
}};

int NWW(int aa, int bb)
{
    return (aa*bb)/NWD(aa,bb);
}






//PROGRAM




int mainn()
{
    int a,b,c,d;
    Dane(a,b,c,d);
    int mianownik = NWW(b,d);
    a=(mianownik/b)*a;
    c=(mianownik/d)*c;
    int licznik = a+c;
    cout << endl << licznik << endl;
    cout << "-----" << endl;
    cout << mianownik << endl;
}






















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
