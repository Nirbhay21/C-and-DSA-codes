#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char c = 'A';
        for (int col = 0; col < row + 1; col++)
        {
            cout << c << " ";
            c++;
        }
        c -= 1;
        for (; c > 'A'; c--)
        {
            cout << char(c - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}