
#include <iostream>
#include <math.h>

using namespace std;


void usmiech(int ile, char z)
{
    for (int i=1; i<=ile; i++)
    {
        cout << " :)";
    }
    cout << "Znak: " << z;

}



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
    int liczba;\
    char znak;
    cout << "Ile usmiszekow?";
    cin >>liczba;
    cin >>znak;
    usmiech(liczba, znak);


































    // return 0 };





























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
