#include <iostream>
using namespace std;

int binarySearchLastMostOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ind = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ind = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ind;
}

int main()
{
    int arr[12] = {10, 22, 30, 30, 30, 30, 30, 30, 30, 30, 32, 32};
    cout<<"Last occurence of 30 in array - "<<binarySearchLastMostOccurence(arr, 12, 30);
    return 0;
}