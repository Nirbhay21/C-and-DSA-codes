#include <iostream>
using namespace std;

void print1ToN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    cout << "Number from 1 to " << n << " - " << endl;
    print1ToN(n);
    return 0;
}