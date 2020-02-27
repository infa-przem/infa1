#include <iostream>

using namespace std;

int main()
{
 int a;
 float b;
 int d=1;
 while (d>=1) {
        if (d>1) {
            cout << "B³ad";
            return 0;
        }
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    cout << "Podaj liczbe rzeczywista: ";
    cin >> b;
    cout << "Liczba a = " << a << endl;
    cout << "Liczba b = " << b << endl;
    cout << "Powtorz?";
    cin >> d;
 };
 return 0;


}
