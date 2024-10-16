#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (i < size - oneCount)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
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
    int arr[10] = {0, 1, 0, 1, 0, 0, 0, 1, 0, 1};
    printArray(arr, 10);
    sort(arr, 10);
    printArray(arr, 10);
    return 0;
}