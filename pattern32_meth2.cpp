#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < n * 2 - 2 - row; star++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col != row)
            {
                cout << row + 1 << " * ";
            }
            else
            {
                cout << row + 1 << ' ';
            }
        }
        for (int star = 0; star < n * 2 - 2 - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}