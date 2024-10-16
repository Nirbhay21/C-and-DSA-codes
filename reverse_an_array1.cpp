#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size)
{
    cout << "Displaying array - " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printArray(arr, 7);
    reverse(arr, 7);
    printArray(arr, 7);
    return 0;
}