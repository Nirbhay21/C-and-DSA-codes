#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 0, j = 1;
    for (int stars = 0; stars < n * (n + 1) / 2.0; stars++)
    {
        cout << "* ";
        i++;
        if (i == j)
        {
            cout << endl;
            i = 0;
            j++;
        }
    }
    return 0;
}