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
        int col = n - row;
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