#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length of rectangle = ";
    cin >> length;
    cout << "Enter width of rectangle = ";
    cin >> width;
    for (int i = 0; i < width; i++)
    {
        for (int i = 0; i < length; i++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}