#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter size of array1 = ";
    cin >> size1;
    cout << "Enter size of array2 = ";
    cin >> size2;
    printf("------------------------------------\n");
    cout << "Enter the values of array1 - \n";
    int arr1[size1];
    int arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter arr1[" << i << "] = ";
        cin >> arr1[i];
    }
    printf("------------------------------------\n");
    cout << "Enter the values of array1 - \n";
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter arr2[" << i << "] = ";
        cin >> arr2[i];
    }
    int a = 0, b = 0;
    int arr3[size1 + size2];
    for (int i = 0; i < size1 + size2; i++)
    {
        if (i < size1)
        {
            arr3[i] = arr1[a];
            a++;
        }
        else
        {
            arr3[i] = arr2[b];
            b++;
        }
    }
    cout<<"Displaying array3 - \n";
    for(int i = 0; i < size1 + size2; i++){
        cout<<"arr3["<<i<<"] = "<<arr3[i]<<endl;
    }
    return 0;
}