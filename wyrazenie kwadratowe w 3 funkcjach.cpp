#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE

    float delta(float aa,float bb, float cc)
    {
        return pow(bb,2)-4*aa*cc;
    }

    float jedno(float aa, float bb)
    {
        return -bb/(2*aa);
    }

    float dwa(float aa, float bb, float dd)
    {
        float d=sqrt(dd);
        return (-bb-d)/(2*aa);
    }
    float dwa_2(float aa, float bb, float dd)
    {
        float d=sqrt(dd);
        return (-bb+d)/(2*aa);
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
    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    float d=delta(a,b,c);
    if (d<0)
    {
        cout<< "Brak rozw";
    }
    else if (d==0)
    {
        cout << jedno(a,b);
    }
    else if (d>0)
    {
        cout << dwa(a,b,d) << endl << dwa_2(a,b,d);
    }




    // KONIEC




















    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

