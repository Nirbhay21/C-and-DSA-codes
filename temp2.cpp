#include <iostream>
using namespace std;

/*
    1
    23
    345
    4567
    56789
*/

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}