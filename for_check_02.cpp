#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    for (;;)
    {
        if (i < 5)
        {
            cout << "Ok" << endl;
            i++;
        }
    }
    return 0;
}