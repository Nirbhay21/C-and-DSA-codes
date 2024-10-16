#include <iostream>
using namespace std;

int main()
{
    int n, result, mask = 0;
    cout << "Enter number = ";
    cin >> n;
    result = ~n;
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        while (n != 0)
        {
            mask = (mask << 1) | 1;
            n >>= 1;
        }
        result = result & mask;
        cout << result;
    }
    return 0;
}