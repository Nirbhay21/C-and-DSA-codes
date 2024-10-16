#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int row = 1, count = 1;
    while (row <= n)
    {
        int space = n - row;
        int col = row;
        while (space--)
        {
            cout << "  ";
        }
        while (col--)
        {
            cout << count++ << " ";
        }
        cout << endl;
        row++;
    }
    return 0;
}