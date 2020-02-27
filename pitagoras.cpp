
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



    int l,p;
    cin>>l;
    if( !cin )
    {

    cin.clear();
    cin.sync();
    cout<< "TO NIE LICZBA SPROBOJ JESZCZE RAZ";
    }
    else
    {
    cin>>p;
    if( !cin )
    {

    cin.clear();
    cin.sync();
    cout<< "TO NIE LICZBA SPROBOJ JESZCZE RAZ";
    }
    else
    {


        for (int i=l; i<=p; i++)
        {
        for (int j=l; j<=p; j++)
        {
            for (int k=l; k<=p; k++)
                {
                    if(i*i+j*j==k*k && i<j && j<k) cout << i << " " << j << " " << k << endl;
                }
        }
        }

    }
    }





    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
