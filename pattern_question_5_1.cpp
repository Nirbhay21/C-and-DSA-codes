#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1;
    while (i <= n * n)
    {
        cout << i << " ";
        if (i % n == 0)
        {
            cout << endl;
        }
        i++;
    }
    return 0;
}