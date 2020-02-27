
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















    /*
    include <iostream>
    #include <math.h>

    using namespace std;

    int main() {
    */
    float a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    d=b*b-4*a*c;
    if (d<0)
    {
        cout << "Brak rozwiazan";
    }
    if (d=0)
    {
        cout << (-b)/(2*a);
    }
    if (d>0)
    {
        cout << "Pierwsze rozw: " << (-b+sqrt(d))/(2*a) << endl << "Drugie rozw: " << (-b+sqrt(d))/(2*a) << endl;
    }




    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
