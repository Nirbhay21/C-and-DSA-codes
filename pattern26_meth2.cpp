#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row * 2 + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < (n - row - 2) * 2 + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << n - row - 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}