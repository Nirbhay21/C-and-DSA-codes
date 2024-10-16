#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int stars = 0; stars < n * n; stars++)
    {
        cout << "* ";
        if ((stars + 1) % n == 0)
        {
            cout << endl;
        }
    }
    return 0;
}