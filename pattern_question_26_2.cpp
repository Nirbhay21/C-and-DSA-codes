#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        int col = 1;
        while (space--)
        {
            cout << "  ";
        }
        while (col <= row)
        {
            cout << col++ << " ";
        }
        col = col - 2;
        while (col >= 1)
        {
            cout << col-- << " ";
        }
        cout << endl;
        row++;
    }
    return 0;
}