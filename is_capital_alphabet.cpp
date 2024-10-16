#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << "Lower Case";
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << "Upper Case";
    }
    else
    {
        cout << "Not lower or upper.";
    }
}