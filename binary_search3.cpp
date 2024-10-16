#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  pair<int, int> p(-1, -1);
  int start = 0, end = n - 1;
  int mid1 = (start + end) / 2, mid2;
  while (start <= end) {
    if (arr[mid1] == k) {
      break;
    } else if (k < arr[mid1]) {
      end = mid1 - 1;
    } else {
      start = mid1 + 1;
    }
    mid1 = (start + end) / 2;
  }
  mid2 = mid1;
  while (arr[mid1 - 1] == k && mid1 != 0) {
    mid1--;
  }
  while (arr[mid2 + 1] == k && mid2 != n - 1) {
    mid2++;
  }
  if (arr[mid1] == k && arr[mid2] == k) {
    p.first = mid1;
    p.second = mid2;
  }
  return p;
}

int main()
{
    vector<int> arr = {10, 10, 10, 10, 10, 10, 10, 10};
    pair<int, int> p = firstAndLastPosition(arr, 8, 4);
    cout << p.first << endl;
    cout << p.second;
    return 0;
}