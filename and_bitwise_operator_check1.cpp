#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int binary = 0, i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binary = bit * pow(10, i) + binary;
        n = n >> 1;
        i = i + 1;
    }
    cout<<"Binary - "<<binary;
    return 0;
}