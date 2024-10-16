#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter number = ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not Prime number";
            break;
        }
        else{
            count++;
        }
    }
    if(count == n - 2){
        cout<<n<< " is Prime number";
    }
    return 0;
}