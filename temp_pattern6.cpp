#include <iostream>
using namespace std;

/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
void printPatt(int n)
{
    int i = 1;
    while (i <= (n))
    {
        int gaps = n - 2 * i + 1, k = 1;
        if (i > (n) / 2)
        {
            int no = (n + 1) / 2;
            gaps = 2 * (i % no);
        }
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        int ch = n - gaps;
        while (ch >= 1)
        {
            cout << "*";
            ch = ch - 1;
        }
        cout << "\n";
        i = i + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    printPatt(n);
    return 0;
}
