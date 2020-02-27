#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE


float NWD(float x, float y)
{

do {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    } while (x!=y);
    return x;
}







// FUNKCJE

int main()
{
 int decyzja=1;
 while (decyzja>=1) {
        if (decyzja>1) {
            cout << "Blad" << endl;
            return 0;
        }




    // POCZATEK

    float a,b, c, NWD1,NWD2;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a==b & b==c)
    {
        cout << a;

    }
    else
    {
        cout << endl << NWD(NWD(a,b),c);
    }


    // KONIEC




















    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

