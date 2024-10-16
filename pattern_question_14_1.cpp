#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int c = 'A';
    int i = 1, j = 0, k = 0;
    while (i <= n * n)
    {
        cout << char(c + k) << " ";
        if (i % n == 0)
        {
            cout << endl;
            k = j++;
        }
        k++, i++;
    }
    return 0;
}