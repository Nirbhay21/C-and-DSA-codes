#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length of rectangle (columns) = ";
    cin >> length;
    cout << "Enter width of rectangle (rows) = ";
    cin >> width;
    for (int cols = 0; cols < length * width; cols++)
    {
        if (cols < length || cols > length * (width - 1) - 1 || (cols + 1) % length == 0 || cols % length == 0)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
        if ((cols + 1) % length == 0)
        {
            cout << endl;
        }
    }
}