#include<iostream>
using namespace std;

int main(){
    int n, num1 = 0, num2 = 1, num3;
    cout<<"Enter number = ";
    cin>>n;
    while(num1 <= n){
        cout<<num1<<endl;
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return 0;
}