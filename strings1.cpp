#include<iostream>
#include<vector>
using namespace std;

vector<string> printPatt(int n) {
  vector<string> vec;
  while (n >= 1) {
    string str;
    for (int i = 1; i <= n; i++) {
      str.append("*");
    }
    vec.push_back(str);
    n--;
  }
}

int main(){
    string str = "";
    cout<<str.append("s");
    return 0;
}