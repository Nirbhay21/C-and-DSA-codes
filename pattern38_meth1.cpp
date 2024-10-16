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
            if (col == 0 || col == row * 2)
            {
                cout << "* ";
            }
            else
            {
                if (col <= row)
                {
                    cout << col << ' ';
                }
                else
                {
                    cout << (row * 2 + 1) - col - 1 << ' ';
                }
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < (n - 2 - row) * 2 + 1; col++)
        {
            if (col == 0 || col == (n - 2 - row) * 2)
            {
                cout << "* ";
            }
            else
            {
                if (col <= row)
                {
                    cout << col << ' ';
                }
                else
                {
                    cout << (row * 2 + 1) - col - 1 << ' ';
                }
            }
        }
        cout << endl;
    }
    return 0;
}