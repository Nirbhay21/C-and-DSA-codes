#include <iostream>
using namespace std;

int main()
{

    int length, width;
    cout << "Enter length of rectangle = ";
    cin >> length;
    cout << "Enter width of rectangle = ";
    cin >> width;
    for (int stars = 0; stars < length * width; stars++)
    {
        cout << "* ";
        if ((stars + 1) % length == 0)
        {
            cout << endl;
        }
    }
    return 0;
}