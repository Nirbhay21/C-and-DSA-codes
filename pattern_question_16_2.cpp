#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int row = 1;
    char c = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << c++ << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}