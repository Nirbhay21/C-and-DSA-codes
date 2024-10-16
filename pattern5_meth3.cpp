#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int rowNo = 1;
    for (int stars = 1; stars <= n * (n + 1) / 2.0; stars++)
    {
        cout << "* ";
        if (stars == rowNo * (rowNo + 1) / 2.0)
        {
            cout << endl;
            rowNo++;
        }
    }
    return 0;
}