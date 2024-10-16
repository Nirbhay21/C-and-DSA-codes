#include <iostream>
using namespace std;

int g = 999; // Global Veriable. (Bad Practice)

void printG();

int main()
{
    if (true)
    { 
        int a = 12; // Local Veriable
        cout << "a - " << a << endl;
        if (true)
        {
            cout << a << endl;
            if (true)
            {
                int a = 100; // Local veriable.
                cout << "a - " << a << endl;
            }
        }
        cout << "g - " << g << endl;
        printG();

        for (int i = 0; i <= 3; i++)
        {
            cout << g << endl;
        }
    }
    // cout << a << endl;  - It is inaccessable. (It is local varable of if block it is not accessible outside that block).
    return 0;
}

void printG()
{
    cout << "g - " << g << endl;
}