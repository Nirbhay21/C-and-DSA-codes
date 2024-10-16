#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p(-1, -1);
    int start = 0, end = n - 1, firstInd, lastInd;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            firstInd = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            lastInd = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    p.first = firstInd;
    p.second = lastInd;
    return p;
}

int main()
{
    vector<int> arr = {10, 20, 30, 30, 30, 30, 50, 50};
    pair<int, int> p = firstAndLastPosition(arr, 8, 30);
    cout << "First position - " << p.first << endl;
    cout << "Second position - " << p.second << endl;
    return 0;
}