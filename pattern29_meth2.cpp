#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (char c = 'A'; c < 'A' + row + 1; c++)
        {
            cout << c << " ";
        }
        for (char c = 'A' + row - 1; c >= 'A'; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}