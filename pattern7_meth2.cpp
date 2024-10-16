#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int num = 1, rowNo = 1;
    for (int cols = 1; cols <= n * (n + 1) / 2.0; cols++)
    {
        cout << num << " ";
        num++;
        if (cols == rowNo * (rowNo + 1) / 2.0)
        {
            cout << endl;
            num = 1;
            rowNo++;
        }
    }
    return 0;
}