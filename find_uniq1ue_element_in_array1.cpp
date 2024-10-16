#include <iostream>
using namespace std;

int getUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count != 2)
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {4, 2, 4, 8, 5, 2, 8};
    cout<<"Unique element is: "<<getUnique(arr, 7);
    return 0;
}