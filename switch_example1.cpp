#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Number is 1" << endl;
        break;
    case 2:
        cout << "Number is 2" << endl;
        break;
    case 3:
        cout << "Number is 3" << endl;
        break;
    case 4:
        cout << "Number is 4" << endl;
        break;
    case 5:
        cout << "Number is 5" << endl;
        break;
    default:
        cout << "Number is not 1, 2, 3, 4 or 5" << endl;
        return 0;
    }
}
