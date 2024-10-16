#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int count = 0;
    for (int stars = 0; stars < n * n; stars++)
    {
        cout << "* ";
        count++;
        if (count == n)
        {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}