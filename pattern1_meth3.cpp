#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int stars = 1; stars <= n * n; stars++)
    {
        cout << "* ";
        if (stars % n == 0)
        {
            cout << endl;
        }
    }
    return 0;
}