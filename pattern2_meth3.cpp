#include <iostream>
using namespace std;

int main()
{

    int length, width;
    cout << "Enter length of rectangle = ";
    cin >> length;
    cout << "Enter width of rectangle = ";
    cin >> width;
    int count = 0;
    for (int stars = 0; stars < length * width; stars++)
    {
        cout << "* ";
        count++;
        if (count == length)
        {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}