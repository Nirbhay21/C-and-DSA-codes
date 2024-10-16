#include <iostream>
using namespace std;

int main()
{
    int balance;

    cout << "Enter your balance = ";
    cin >> balance;
    if (balance >= 10)
    {
        cout << "You can bye maggi";
    }

    else
    {
        cout << "You can't bye maggi";
    }
    return 0;
}