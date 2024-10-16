#include <iostream>
using namespace std;

int binaryMountanPeak(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2; // start + (end - start) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 2, 1};
    int ans = binaryMountanPeak(arr, 9);
    cout << "Peak element is: " << ans;
    string str = "ok";
    return 0;
}