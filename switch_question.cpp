#include <iostream>
using namespace std;

int main()
{
    int rs;
    cout << "Enter how many rs you have = ";
    cin >> rs;
    int hundreds, fiftys, twentys, tens, fives, ones;
    switch (1)
    {
    case 1:
        hundreds = rs / 100;
        rs %= 100;
    case 2:
        fiftys = rs / 50;
        rs %= 50;
    case 3:
        twentys = rs / 20;
        rs %= 20;
    case 4:
        tens = rs / 10;
        rs %= 10;
    case 5:
        fives = rs / 5;
        rs %= 5;
    case 6:
        ones = rs / 1;
        rs %= 1;
    }
    cout << "You require - " << endl;
    cout << hundreds << " notes of 100" << endl;
    cout << fiftys << " notes of 50" << endl;
    cout << twentys << " notes of 20" << endl;
    cout << tens << " notes of 10" << endl;
    cout << fives << " notes of 5" << endl;
    cout << ones << " notes of 1" << endl;
    return 0;
}