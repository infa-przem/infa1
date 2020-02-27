#include <iostream>

using namespace std;

int main()
{
    int d = 1;
while (d>=1) {
    if (d>1)
        {
        cout << "B³ad";
        return 0;
        }

    //POCZ¥TEK

    float x;
    cout << "Wyrazenie w(x)=3x^2+2x-7" << endl;
    cout << "Podaj x: ";
    cin >> x;
    cout << "Wynik to: " << 3*x*x+2*x-7 << endl << endl;

    //KONIEC

    cout << endl << "Powtorzyc? ";
    cin >> d;
    cout << endl << endl << endl;
 };
 return 0;
}
