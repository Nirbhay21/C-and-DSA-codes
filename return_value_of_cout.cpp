#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    if (cout << n) // cout << n;  ---> returns a reference to the cout stream if output operation is successfull.  and this reference is evaluated to true.
    {
        cout << "Hello";
    }
    return 0;
}