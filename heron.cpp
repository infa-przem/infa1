
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

    float a, b, c, p, pole;

    cout << "a = ";
    cin >> a;
    cout << endl << "b = ";
    cin >> b;
    cout << endl << "c = ";
    cin >> c;
    p=((a+b+c)/2);
    pole=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << endl << "Pole = " << pole;
    // return 0;

    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
