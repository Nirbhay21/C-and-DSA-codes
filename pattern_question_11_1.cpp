#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 0;
    while (i <= n * n)
    {
        cout << char('A' + j) << " ";
        if (i % n == 0)
        {
            cout << endl;
            j++;
        }
        i++;
    }
    return 0;
}