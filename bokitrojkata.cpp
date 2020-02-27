
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
    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>0 && b>0 && c>0) {
    if (a+b>c && a+c>b && b+c>a)
    {
        cout << "Trojkat jest:" << endl;
        if ((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
        {
            cout << "- prostokatny"<< endl;
        }
        if (a==b && b==c)
        {
            cout << "- rownoboczny"<< endl;
        }
        if (a!=b && b!=c && c!=a)
        {
            cout << "- roznoboczny"<< endl;
        }
        if (a==c || a==b || c==b)
        {
            cout << "- rownoramienny"<< endl;
        }
    }
    else
    {
        cout << "NIE ISTNIEJE"<< endl;
    }

    }
    else
    {
        cout << "NIE ISTNIEJE"<< endl;
    }




    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
