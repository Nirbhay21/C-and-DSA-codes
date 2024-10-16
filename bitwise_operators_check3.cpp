#include <iostream>
using namespace std;

int main()
{
    cout << "Left Shift - ( << )" << endl;
    cout << "2 << 0 --> " << (2 << 0) << endl;
    cout << "2 << 1 --> " << (2 << 1) << endl;
    // 2 << 1 mean 2 multiply by 2 single time --> 2 * 2 = 14
    cout << "2 << 2 --> " << (2 << 2) << endl;
    // 2 << 2 mean 2 multiply by 2 two time;   --> 2 * 2 * 2 = 8
    cout << "2 << 3 --> " << (2 << 3) << endl;
    // 2 << 3 mean 2 multiply by 2 three time; --> 2 * 2 * 2 * 2 = 16
    cout << "2 << 4 --> " << (2 << 4) << endl;
    cout << "2 << 5 --> " << (2 << 5) << endl;
    cout << "5 << 3 --> " << (5 << 5) << endl;
    cout << "6 << 3 --> " << (6 << 3) << endl;
    // x << n mean --> x * 2 ^ n.

    cout << endl;

    cout << "Right Shift - ( >> )" << endl;
    cout << "100 >> 4 --> " << (100 >> 4) << endl;
    cout << "10 >> 4 --> " << (10 >> 1) << endl;
    cout << "10 >> 4 --> " << (10 >> 3) << endl;
    cout << "160 >> 1 --> " << (160 >> 1) << endl;
    // 160 >> 1 mean divide 160 by 2 for 1 time.
    cout << "160 >> 2 --> " << (160 >> 2) << endl;
    // 160 >> 2 mean divide 160 by 2 for 2 time.
    cout << "160 >> 3 --> " << (160 >> 3) << endl;
    // 160 >> 3 mean divide 160 by 2 for 3 time.
    cout << "160 >> 4 --> " << (160 >> 4) << endl;
    // 160 >> 4 mean divide 160 by 2 for 4 time.
    cout << "160 >> 5 --> " << (160 >> 5) << endl;
    // x >> n --> x / 2 ^ n.
    cout << "-100 >> 1 --> " << (-10 >> 1) << endl;
    return 0;
}