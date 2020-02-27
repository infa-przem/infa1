#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int poziom;


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
 return 0;
}

