#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 0;
    int binary = 0;
    while (n != 0)
    {
        int bit = n % 2;
        binary = bit * pow(10, i) + binary;
        i++, n /= 2;
    }
    cout<<binary;
    return 0;
}