#include <iostream>
using namespace std;

void printArray(char arr[], int size)
{
    cout << "Displaying array - " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr[5] = {'A', 'E', 'I', 'O', 'U'};
    printArray(arr, 5);
    return 0;
}