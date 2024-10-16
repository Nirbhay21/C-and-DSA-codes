#include <iostream>
using namespace std;

int getFactorial()
{
    int num;
    cout << "Enter number = ";
    cin >> num;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int ans = getFactorial();
    cout << "Ans - " << ans << endl;
    ans = getFactorial();
    cout << "Ans - " << ans << endl;
    ans = getFactorial();
    cout << "Ans - " << ans << endl;
    return 0;
}