#include <iostream>
using namespace std;

int setBitsIn(int a, int b)
{
    int count = 0;
    while ((a > b) ? a : b)
    {
        if (a & 1)
        {
            count++;
        }
        if (b & 1)
        {
            count++;
        }
        a >>= 1;
        b >>= 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    int count = setBitsIn(a, b);
    cout << "Total set bits in a and b is: " << count;
    return 0;
}