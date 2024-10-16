#include <iostream>
using namespace std;

int main()
{
    int ROWS_COUNT, COLUMN_COUNT;
    cout<<"Enter length of rectangle = ";
    cin>>COLUMN_COUNT;
    cout<<"Enter width of rectangle = ";
    cin>>ROWS_COUNT;
    for (int row = 0; row < ROWS_COUNT; row++)
    {
        for (int column = 0; column < COLUMN_COUNT; column++)
        {
            if (row == 0 || row == ROWS_COUNT - 1)
            {
                cout << "* ";
            }
            else
            {
                if (column == 0 || column == COLUMN_COUNT - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}