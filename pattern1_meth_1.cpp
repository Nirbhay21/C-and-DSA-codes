#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int i = 1; i <= num; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}