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
        if (j <= n - k)
        {
            cout << "  ";
            j++, i++;
        }
        else if (j <= n)
        {
            cout << k << " ";
            j++, i++;
        }
        else
        {
            cout << endl;
            j = 1;
            k++;
        }
    }
    return 0;
}