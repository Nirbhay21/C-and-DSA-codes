#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    cout << "Element at first location = " << numbers[0] << endl;
    cout << "Element at second location = " << numbers[1] << endl;
    cout << "Element at sixth location = " << numbers[2] << endl;
    cout << "Element at fouth location = " << numbers[3] << endl;
    cout << "Element at fifth location = " << numbers[4] << endl;
    // cout << "Element at fifth location = " << numbers[100] << endl;   It will give warning or error. 
    return 0;
}