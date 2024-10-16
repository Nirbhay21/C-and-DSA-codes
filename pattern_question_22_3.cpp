#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int row = 0;
    while (row < n)
    {
        int space = 1;
        while (space++ <= row)
        {
            cout << "  ";
        }
        int col = n - row;
        while (col--)
        {
            cout << row + 1 << " ";
        }
        cout << endl;
        row++;
    }
    return 0;
}