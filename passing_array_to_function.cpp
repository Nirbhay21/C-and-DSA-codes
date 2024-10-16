#include <iostream>
using namespace std;

void updateArray(int arr[], int size)
{
    cout << "Updating array on updateArray() - " << endl;
    arr[0] = 100;
    arr[size - 1] = 100;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    updateArray(arr, 5);
    cout << "Displaying array on main() - " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}