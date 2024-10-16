#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter nubmer = ";
    cin >> n;
    for (int row = 1; row <= n - 1; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row - 1) * 2 + 1; col++)
        {
            if ((col != 1) && (col != (row - 1) * 2 + 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int col = 0; col < n; col++)
    {
        cout << "* ";
    }
    return 0;
}