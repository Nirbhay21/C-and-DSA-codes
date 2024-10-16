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
        while (col <= row)
        {
            cout << char('A' + n - 1 - (row - col)) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}