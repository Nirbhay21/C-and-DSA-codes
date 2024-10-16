#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = 1;
    while (i <= n * n)
    {
        cout << k << " ";
        if (j == n)
        {
            cout << endl;
            k = k + 1;
            j = 0;
        }
        j = j + 1;
        i = i + 1;
    }
    return 0;
}