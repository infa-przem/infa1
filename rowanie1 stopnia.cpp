
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

    float a,b,x;
    cout <<"Podaj a ";
    cin>>a;
    cout<< "Podaj b ";
    cin>>b;
    if (a==0) {
        if(b==0) {
            cout << "Brak rozwiazan";
        }
        else {
            cout << "Nieskonczenie wiele ronwiazan";
        }
    }
    else {
        x=-b/a;
        cout << "x = " << x;
    }
    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
