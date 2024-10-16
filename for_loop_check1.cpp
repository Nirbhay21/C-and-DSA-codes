#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    cout << "Counting from 1 to " << n << " - " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}