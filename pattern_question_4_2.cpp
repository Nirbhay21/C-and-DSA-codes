#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = n;
    while (i <= n * n)
    {
        cout << j << " ";
        if (i % n == 0)
        {
            cout << endl;
        }
        if (j == 1)
        {
            j = n + 1;
        }
        j = j - 1;
        i = i + 1;
    }
    return 0;
}