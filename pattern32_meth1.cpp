#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int star1 = 0; star1 < n * 2 - 2 - row; star1++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row * 2 + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1 << ' ';
            }
            else
            {
                cout << "* ";
            }
        }
        for (int star2 = 0; star2 < n * 2 - 2 - row; star2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}