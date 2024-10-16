#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int rowNo = 1;
    for (int col = 0; col < n * (n + 1) / 2.0; col++)
    {
        int rowEndColum = rowNo * (rowNo + 1) / 2.0;
        if ((col + 1) == rowEndColum)
        {
            cout << "* ";
            cout << endl;
            rowNo++, col++;
        }
        if ((col + 1) == rowEndColum + 1 && col < n * (n + 1) / 2.0) // rowEndColumn + 1  ==> Row start column
        {
            cout << "* ";
        }
        else if (rowNo == n)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
    return 0;
}