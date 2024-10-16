#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1, k = 1;
    while (i <= (n * (n + 1) / 2.0))
    {
        cout << k << " ";
        if (j == k)
        {
            cout << endl;
            j = 0;
            k++;
        }
        j++;
        i++;
    }
    return 0;
}