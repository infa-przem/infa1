
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
    int poziom;
    cin >> poziom;

    for (int i=1; i<=poziom; i++)
    {
        for (int j=1; j<=poziom-i; j++)
        {
            cout << " ";
        }
        for (int j=1; j <=i*2-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }











    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

