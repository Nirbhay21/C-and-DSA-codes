#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing array - " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumArray(int size, int arr[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr, 10);
    cout << "Sum of array: " << sumArray(10, arr);
    return 0;
}