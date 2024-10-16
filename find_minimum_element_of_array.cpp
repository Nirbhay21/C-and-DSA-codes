#include <iostream>
using namespace std;

int getMin(int arr[], int size)
{
    int minimum = arr[0];
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}

int main()
{
    int arr[100], size;
    cout << "Enter size = ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << min(1, 2);
    cout << "Minimum value is: " << getMin(arr, size);
    return 0;
}