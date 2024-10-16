#include <iostream>
using namespace std;

int binaryPivot(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] >= arr[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "Pivot element is: " << binaryPivot(arr, 5);
    return 0;
}