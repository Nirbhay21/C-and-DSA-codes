#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int binary;
    cout << "Enter binary = ";
    cin >> binary;
    int decimal = 0, i = 0;
    while (binary > 0)
    {
        int ld = binary % 10;
        if (ld == 1)
        {
            decimal += pow(2, i);
        }
        binary /= 10;
        i++;
    }
    cout << "Decimal value - " << decimal;
    return 0;
}