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
        int val = row;
        while (col <= row)
        {
            cout << val << " ";
            col++, val++;
        }
        cout << endl;
        row++;
    }
    return 0;
}