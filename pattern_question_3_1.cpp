#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1;
    while (i <= n * n)
    {
        cout << j << " ";
        if (i % n == 0)
        {
            cout << endl;
            j = 0;
        }
        i = i + 1;
        j = j + 1;
    }
    return 0;
}