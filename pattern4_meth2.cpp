#include <iostream>
using namespace std;

int main()
{
    int ROWS_COUNT, COLUMN_COUNT;
    cout << "Enter length of rectangle = ";
    cin >> COLUMN_COUNT;
    cout << "Enter width of rectangle = ";
    cin >> ROWS_COUNT;
    for (int row = 0; row < ROWS_COUNT; row++)
    {
        if (row == 0 || row == ROWS_COUNT - 1)
        {
            for (int col = 0; col < COLUMN_COUNT; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int spaces = 0; spaces < COLUMN_COUNT - 2; spaces++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}