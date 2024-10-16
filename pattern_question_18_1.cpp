#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 0, k = 0;
    while (i <= (n * (n + 1) / 2))
    {
        cout << char('A' + n - k + j - 1) << " ";
        if (j == k)
        {
            cout << endl;
            j = -1;
            k++;
        }
        j++, i++;
    }
    return 0;
}