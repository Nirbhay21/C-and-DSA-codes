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
        int col = 0;
        while (col < row)
        {
            cout << row + col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}