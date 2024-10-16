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
        int space = row - 1;
        int col = row;
        while (space)
        {
            cout << "  ";
            space--;
        }
        while (col <= n)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}