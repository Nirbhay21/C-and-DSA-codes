#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }
    return 0;
}