#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;

    int i = 0, ans = 0;
    while(n != 0){
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Binary = "<<ans;
    return 0;
}