#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number - ";
    cin >> n;
    cout << "Pattern for " << n << " -\n";
    int j = 0;
    int i = 0;
    while (i < n)
    {
        while (j < n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
        j = 0;
    }
    return 0;
}