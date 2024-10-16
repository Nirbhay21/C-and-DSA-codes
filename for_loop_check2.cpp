#include <iostream>
using namespace std;

int main()
{
    // for(;;){
    //     cout<<"ok"<<endl;         <--  This will go in infinite loop
    // }

    int j = 11;
    for (int i = 1; i <= 10; i++, j++)
    {
        cout << i << " - " << j << endl;
    }
    return 0;
}