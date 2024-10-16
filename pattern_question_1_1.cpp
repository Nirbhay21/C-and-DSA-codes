#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter number = ";
    cin >> n;
    cout << "Star square pattern - " << endl;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}