#include <iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
int nThTermOfFibo(int n)
{
    int t1 = 0, t2 = 1, temp;
    for (int i = 1; i < n; i++)
    {
        int sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    return t1;
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    int nthTerm = nThTermOfFibo(n);
    cout << n << "th term is: " << nthTerm;
    return 0;
}