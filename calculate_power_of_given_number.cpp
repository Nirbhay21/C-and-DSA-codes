#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    cout << a << " ^ " << b << " = " << ans;
    return 0;
}