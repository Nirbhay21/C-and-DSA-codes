#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    bool flag = true;
    int i = 1, j = 1, k = 1, l, m = n;
    while (i <= (n * n) * 2)
    {
        if (j <= n - k + 1)
        {
            cout << j << " ";
            j++, i++;
        }
        else if (j <= n)
        {
            cout << "* ";
            j++, i++;
        }
        else if (flag)
        {
            m = n - k + 1;
            l = k - 1;
            flag = false;
        }
        else if (l >= 1)
        {
            cout << "* ";
            l--, i++;
        }
        else if (m >= 1)
        {
            cout << m << " ";
            m--, i++;
        }
        else
        {
            cout << endl;
            flag = true;
            j = 1;
            k++;
        }
    }
    return 0;
}