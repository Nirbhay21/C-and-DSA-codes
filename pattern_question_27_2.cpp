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
        int col = 1;
        while (col <= n - row)
        {
            cout << col++ << " ";
        }
        int star = row * 2;
        while (star--)
        {
            cout << "* ";
        }
        col = col - 1;
        while (col)
        {
            cout << col-- << " ";
        }
        cout << endl;
        row++;
    }
    return 0;
}