#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        cout << "*";
        for (int space = 0; row != 0 && space < (row - 1) * 2 + 1; space++)
        {
            cout << " ";
        }
        if(row != 0){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}