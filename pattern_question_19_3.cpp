#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = n - 1;
    while (i <= n * n)
    {
        if (j <= k)
        {
            cout << "  ";
            j++;
        }
        else if (j <= n)
        {
            cout << "* ";
            j++;
        }
        else
        {
            cout << endl;
            j = 1;
            k--, i--;
        }
        i++;
    }
    return 0;
}