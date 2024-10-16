#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    cout << "Reverse binary of " << n << " is: ";
    while (n > 0)
    {
        cout << n % 2;
        n /= 2;
    }
    return 0;
}