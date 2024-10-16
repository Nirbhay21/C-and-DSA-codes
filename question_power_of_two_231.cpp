#include <iostream>
using namespace std;

int main()
{
    int n, p = 1;
    cout << "Enter number = ";
    cin >> n;
    for (int i = 0; i <= 30; i++)
    {
        if (n == p)
        {
            cout << "True";
            exit(0);
        }
        p = p * 2;
    }
    cout << "False";
    return 0;
}