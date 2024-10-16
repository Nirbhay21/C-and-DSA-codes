#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number = ";
    cin >> num;
    if (num < 0)
    {
        cout << "It is -ve number.";
    }
    else if (num > 0)
    {
        cout << "It is +ve number.";
    }
    else
    {
        cout << "It is Zero.";
    }
    return 0;
}