#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter binary number = ";
    cin >> n;
    int i = 0, decimal = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            decimal += pow(2, i);
        }
        n /= 10;
        i++;
    }
    cout<<"Decimal value - "<<decimal;
    return 0;
}