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
    cout << "Enter nubmer = ";
    cin >> n;
    int i = 0;
    int count = 1;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << count;
            count = count + 1;
            j++;
        }
        cout << endl;
        count = count - i;
        i++;
    }
    return 0;
}