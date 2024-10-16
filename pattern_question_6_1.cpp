#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = 1;
    while (i <= (n / 2.0 * (1 + n)))
    {
        cout << "* ";
        if (j == k)
        {
            cout << endl;
            k = k + 1;
            j = 0;
        }
        i++, j++;
    }
}