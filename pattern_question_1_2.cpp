#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1, j = 1;
    while (i <= n * n)
    {
        cout << "* ";
        if (j == n)
        {
            cout << endl;
            j = 0;
        }
        j++;
        i++;
    }
    return 0;
}