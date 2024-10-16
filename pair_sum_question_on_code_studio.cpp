#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
  vector<vector<int>> vec;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == s) {
        vector<int> temp;
        temp.push_back((arr[i] < arr[j]) ? arr[i] : arr[j]);
        temp.push_back((arr[i] > arr[j]) ? arr[i] : arr[j]);
        vec.push_back(temp);
      }
    }
  }
  sort(vec.begin(), vec.end());
  return vec;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<vector<int>> res = pairSum(vec, 5);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}