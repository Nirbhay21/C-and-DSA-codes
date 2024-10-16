#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    // We have total n * n colums.
    for (int cols = 0; cols < n * n; cols++)
    {
        // cols < n                  -->  Condition for first row.
        // cols > n * (n - 1) - 1    -->  Condition for last row.
        // (cols + 1) % n == 0       -->  Condition for last column.
        // cols % n == 0             -->  Condition for first column.

        if (cols < n || cols > n * (n - 1) - 1 || (cols + 1) % n == 0 || cols % n == 0)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }

        // for new line after each row.
        if ((cols + 1) % n == 0)
        {
            cout << endl;
        }
    }
}