#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Displaying array - " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0, j = 1; i < size - 1; i += 2, j += 2)
    {
        swap(arr[i], arr[j]);
    } 
}

int main()
{
    int arr[8] = {2, 1, 4};
    printArray(arr, 3);
    swapAlternate(arr, 3);
    printArray(arr, 3);
    return 0;
}