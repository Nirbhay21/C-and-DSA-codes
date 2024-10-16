#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = 1;
    while (i <= (n * (n + 1) / 2))
    {
        cout << char('A' + j + k - 2) << " ";
        if (j == k)
        {
            cout << endl;
            j = 0;
            k++;
        }
        j++, i++;
    }
    return 0;
}