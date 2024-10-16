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
            cout << "  ";
        }
        int count = 1;
        for (; count <= row + 1; count++)
        {
            cout << count << ' ';
        }
        for (count -= 2; count >= 1; count--)
        {
            cout << count << ' ';
        }
        cout<<endl;
    }
    return 0;
}