#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 2};
    vector<int> vec;
    for (int i = 0; i < 7; i++)
    {
        vec.push_back(arr[i]);
    }
    cout << "Duplicate is: " << findDuplicate(vec);
    return 0;           
}