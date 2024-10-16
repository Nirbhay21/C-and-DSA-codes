#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int spaceCount = n - 1, colNo = 0;
    for (int col = 0; col < n * n; col++)
    {
        if (colNo < spaceCount)
        {
            cout << " ";
        }
        else
        {
            cout << "* ";
        }
        colNo++;
        if (colNo - 1 == n - 1)
        {
            cout << endl;
            spaceCount--;
            colNo = 0;
        }
    }
    return 0;
}