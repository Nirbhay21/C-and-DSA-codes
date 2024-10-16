#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int revNum = 0, i = 0;
    while (n != 0)
    {
        int ld = n % 10;
        if ((revNum < INT_MIN / 10) || (revNum > INT_MAX / 10))
        {
            cout << "Reverse Number = 0"<<endl;
            exit(0);
        }
        revNum = revNum * 10 + ld;
        n /= 10;
    }
    cout << "Reverse Number = " << revNum;
    return 0;
}