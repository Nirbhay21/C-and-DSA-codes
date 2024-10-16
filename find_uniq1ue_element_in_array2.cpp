#include <iostream>
using namespace std;

int getUnique(int arr[], int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique ^= arr[i];
    }
    return unique;
}

int main()
{
    int arr[11] = {2, 8, 5, 2, 9, 5, 8, 1, 3, 1, 3};
    cout << getUnique(arr, 11);
    return 0;
}