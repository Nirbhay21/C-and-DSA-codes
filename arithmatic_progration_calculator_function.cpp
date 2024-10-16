#include <iostream>
using namespace std;

int ap(int a, int n, int d)
{
    return a + (n - 1) * d;
}

int main()
{
    int a, n, d;
    cout<<"Enter first term = ";
    cin>>a;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"Enter difference = ";
    cin>>d;
    cout<<n<<"th term is: "<<ap(a, n, d);
    return 0;
}