#include <iostream>
using namespace std;

int factorialOf(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return factorialOf(n) / (factorialOf(r) * factorialOf(n - r));
}

int main()
{
    int n, r, ans;
    cout << "Enter value of n = ";
    cin >> n;
    cout << "Enter value of r = ";
    cin >> r;
    cout<<"Value of nCr is: " <<nCr(n, r);
    return 0;
}