#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int row = n;
    while (row >= 1)
    {
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row--;
    }
    return 0;
}