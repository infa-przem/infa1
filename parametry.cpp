#include <iostream>
using namespace std;
int a,b;

void wartosc(int &x, int &y)
{
    x=x+10;
    y=y-10;
    cout << "X=" << x;
    cout << "Y=" << y;
}

int main()
{
    cin >> a >> b;
    wartosc(a,b);
    cout << "a = " << a;
    cout << "b = " << b;
    return 0;

}
