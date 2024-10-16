#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int key, arr[10] = {-1, 12, 19, 8, -7, -29, 33, 11, -10, 4};
    cout << "Enter element to search in array = ";
    cin >> key;
    if (search(arr, 10, key))
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is absent";
    }
    return 0;
}