#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int spaceCount = n - 1;
    for (int col = 0; col < n * n; col++)
    {
        int colNo = col % n;
        if (colNo < spaceCount)
        {
            cout << " ";
        }
        else
        {
            cout << "* ";
        }
        if ((col + 1) % n == 0)
        {
            cout << endl;
            spaceCount--;
        }
    }
    return 0;
}