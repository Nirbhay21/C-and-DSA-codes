#include <stdio.h>

void selectionSort(int arr[], int size);

int main()
{
    int arr[] = {6, 7, 5, 4, 1, 3, 2};
    selectionSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void selectionSort(int arr[], int size)
{
    int temp, pos;
    for (int i = 0; i < size - 1; i++)
    {
        pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
            {
                pos = j;
            }
        }
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
}