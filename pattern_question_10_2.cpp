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
        int col = row;
        while (col >= 1)
        {
            cout << col << " ";
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}