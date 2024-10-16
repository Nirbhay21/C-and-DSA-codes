#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    bool flag = true;
    int i = 1, j = 1, k = 1, l = 1;
    int z = (n * n) + (n * (n + 1) / 2.0) - n;
    while (i <= z)
    {
        if (j <= n - k)
        {
            cout << "  ";
            j++, i++;
        }
        else if (j <= n)
        {
            cout << l << " ";
            j++, i++, l++;
        }
        else if (flag)
        {
            l -= 2;
            flag = false;
        }
        else if (l >= 1)
        {
            cout << l << " ";
            l--, i++;
        }
        else
        {
            cout << endl;
            l = 1, j = 1;
            flag = true;
            k++;
        }
    }
    cout << --i;
    return 0;
}