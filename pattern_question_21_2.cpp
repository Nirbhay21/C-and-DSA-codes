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
        int col = n - row + 1;
        int space = n - col;
        while (space)
        {
            cout << "  ";
            space--;
        }
        while (col)
        {
            cout << "* ";
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}