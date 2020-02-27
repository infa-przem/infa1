
#include <iostream>
#include <math.h>

using namespace std;


void jedno(float aa, float bb)
{
    float x1;
    x1=(-1*bb)/(2*aa);
    cout << "Jedno rozwiazanie: " << x1;
}

void dwa(float aa, float bb, float dd)
{
    float x1,x2;
    x1=(-bb-dd)/(2*aa);
    x2=(-bb+dd)/(2*aa);
    cout << "Dwa rozwiazania: " << endl;
    cout << x1;
    cout << x2;
}


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
    float a, b, c, d, pd;
    cout << "Podaj a: "<< endl;
    cin >> a;
    cout << "Podaj b: "<< endl;
    cin >> b;
    cout << "Podaj c: "<< endl;
    cin >> c;
    d=b*b-4*a*c;
    pd=sqrt(d);
    if (d<0) cout << "Brak rozw";
    if (d==0) jedno(a,a);
    if (d>0) dwa(a,b,pd);































    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
