#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int i = 1;
    char c = 'A';
    while (i <= n * n)
    {
        cout << c++ << " ";
        if (i % n == 0)
        {
            cout << endl;
        }
        i++;
    }
    return 0;
}