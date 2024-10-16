#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = 2;
    while (i <= (n * (n + 1) / 2.0))
    {
        if (j <= n)
        {
            cout << "* ";
            j++, i++;
        }
        else
        {
            cout << endl;
            j = 0;
            j += k;
            k++;
        }
    }
    return 0;
}