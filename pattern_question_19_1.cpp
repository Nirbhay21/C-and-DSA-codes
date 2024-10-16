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
        int col = 1;
        int space = 1;
        while (space <= n - row)
        {
            cout << "  ";
            space++;
        }
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}