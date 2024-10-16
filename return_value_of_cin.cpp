#include <iostream>
using namespace std;

int main()
{
    int n;
    if (cin >> n) // cin >> n;  ---> returns a reference to the cin stream if input operation is successfull.  and this reference is evaluated to true.
    {
        cout << "Hello";
    }
    return 0;
}