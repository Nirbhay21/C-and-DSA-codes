#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || row == 0)
            {
                cout << col + row + 1 << " ";
            }
            else if (col == n - row - 1)
            {
                cout << n;
            } else {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}