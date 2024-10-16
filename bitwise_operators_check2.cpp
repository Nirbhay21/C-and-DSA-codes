#include <iostream>
using namespace std;

int main()
{
    cout << "AND - ( & )" << endl;
    cout << "8 & 7 --> " << (8 & 7) << endl;
    cout << "10 & 16 --> " << (10 & 16) << endl;
    cout << "23 & 15 --> " << (23 & 15) << endl;
    cout << "50 & 22 --> " << (50 & 22) << endl;
    cout << endl;
    cout << "OR - ( | )" << endl;
    cout << "8 | 7 --> " << (8 | 7) << endl;
    cout << "14 | 32 --> " << (14 | 32) << endl;
    cout << "26 | 42 --> " << (26 | 42) << endl;
    cout << "9 | 3 --> " << (9 | 3) << endl;
    cout << endl;
    cout << "NOT - ( ~ )" << endl;
    cout << "~1 --> " << (~1) << endl;
    cout << "~0 --> " << (~0) << endl;
    cout << "(~7) --> " << (~7) << endl;
    cout << "~7 --> " << ~7 << endl;
    cout << "~(7) --> " << ~(7) << endl;
    cout << endl;
    cout << "XOR - ( ^ )" << endl;
    cout << "5 ^ 5 --> " << (5 ^ 5) << endl;
    cout << "10 ^ 11 --> " << (10 ^ 11) << endl;
    cout << "9 ^ 7 --> " << (9 ^ 7) << endl;
    cout << "12 ^ 13 --> " << (12 ^ 13) << endl;
    cout << "5 ^ 10 --> " << (5 ^ 10) << endl;

    cout << endl;

    cout << "Check 1 - " << endl;
    bool b = 0;
    cout << "bool b = 0;" << endl;
    cout << "~b = " << ~b << endl;
    cout << "~(b) = " << ~(b) << endl;
    cout << "(~b) = " << (~b) << endl;
    return 0;
}