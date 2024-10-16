#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    while (true)
    {
        switch (n)
        {
        case 2:
            cout << "It is 2";
            exit(0);
        case 4:
            cout << "It is 4";
            break;
        case 6:
            cout << "It is 6";
            break;
        case 8:
            cout << "It is 8";
            break;
        case 10:
            cout << "It is 10";
            break;
        }
    }
    return 0;
}