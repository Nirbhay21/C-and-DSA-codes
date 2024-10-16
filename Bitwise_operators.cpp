#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 6;

    cout << "a & b = " << (a & b) << "  (AND)  " << endl;
    cout << "a | b = " << (a | b) << "  (OR)  " <<endl;
    cout << "a   ^ b = " << (a ^ b) << "  (XOR)  " << endl;
    cout << "~a = " << (~a) << "  (NOT)  " << endl;
    cout << "~b = " << (~b) << "  (NOT)  " << endl;
    return 0;
}