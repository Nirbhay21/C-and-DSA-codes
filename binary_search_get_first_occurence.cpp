#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int firstOccurence = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            firstOccurence = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return firstOccurence;
}

int main()
{
    int arr[15] = {1, 2, 3, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10};
    int key;
    cin >> key;
    cout << binarySearch(arr, 15, key);
    return 0;
}