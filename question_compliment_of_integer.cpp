#include <iostream>
#include <math.h>
using namespace std;

// NOT recomanded method.
int main()
{
    int n, result, count = 0;
    cout << "Enter number = ";
    cin >> n;
    result = ~n;
    while (n > 0)
    {
        n <<= 1;
        count++;
    }
    for (int i = 1; i <= count; i++)
    {
        result = result << 1;
    }
    for (int i = 1; i <= count; i++)
    {
        result >>= 1;
    }
    cout << result << endl;
    return 0;
}