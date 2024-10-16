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
    for (int i = 0; i < size; i += 2)
    {
        if(i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    printArray(arr, 6);
    swapAlternate(arr, 6);
    printArray(arr, 6);
    return 0;
}