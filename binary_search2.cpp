#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    // mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        // mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr1[7] = {2, 4, 6, 8, 12, 18, 20};
    int arr2[8] = {3, 8, 11, 14, 16, 20, 22, 50};

    cout << binarySearch(arr1, 7, 12) << endl;
    cout << binarySearch(arr2, 8, 21) << endl;
    return 0;
}