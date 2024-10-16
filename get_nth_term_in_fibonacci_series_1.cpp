#include <iostream>
using namespace std;

int fibo(int n)
{
    int t1 = 0, t2 = 1, sum;
    switch (n)
    {
    case 1:
        return t1;
        break;
    case 2:
        return t2;
        break;
    default:
        for (int i = 3; i <= n; i++)
        {
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
        return sum;
    }
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    cout << n << "th term is: " << fibo(n);
    return 0;
}