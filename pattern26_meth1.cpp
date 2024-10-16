#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col < row)
            {
                cout << row + 1 << "*";
            }
            else
            {
                cout << row + 1;
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            if (col < n - row - 2)
            {
                cout << n - row - 1 << "*";
            }
            else
            {
                cout << n - row - 1;
            }
        }
        cout << endl;
    }
    return 0;
}