#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE









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

    int a,b;
    cin >> a;
    cin >> b;
    if(a==b)
    {
        cout << a;
    }
    else {
    do
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    } while (a!=b);
    cout << endl << endl << a;
}


    // KONIEC




















    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

