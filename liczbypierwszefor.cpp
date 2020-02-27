
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



    int l,p,a;
    cin>>l;
    cin>>p;
    for (int i=l; i<=p; i++)
    {
        a=0;
        for (int j=1;j<=p; j++)
        {

            if (i%j==0) {
                a++;
            }

        }
        if(a==2) {
                cout << i << endl;
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
