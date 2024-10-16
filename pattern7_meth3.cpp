#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int no = 1, i = 1;
    for (int col = 0; col < n * (n + 1) / 2.0; col++)
    {
        cout << no << " ";
        no++;
        if (no - 1 == i)
        {
            cout << endl;
            no = 1;
            i++;
        }
    }
    return 0;
}