#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
  int start = m;
  int end = arr.size() - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++, end--;
  }
}

void printVector(vector<int> arr, int size)
{
    cout << "Displaying array - " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    printVector(arr, 6);
    reverseArray(arr, 3);
    printVector(arr, 6);
}