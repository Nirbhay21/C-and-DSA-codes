#include<iostream>

int findUnique(int *arr, int size) {
  int t;
  std::cin >> t;
  while (t-- > 0) {
    int n;
    std::cin >> n;
    int arr[300];
    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      int count = 0;
      for (int j = 0; j < n; j++) {
        if (arr[i] == arr[j]) {
          count++;
        }
      }
      if(count != 2){
          std::cout<<arr[i];
      }
    }
  }
}

int main(){
    
}