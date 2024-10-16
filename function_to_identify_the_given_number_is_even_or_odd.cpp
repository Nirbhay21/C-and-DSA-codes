#include <iostream>
using namespace std;

bool isEven(int num)
{
    return !(num & 1);
}

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    if (isEven(n))
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is Odd";
    }
    return 0;
}