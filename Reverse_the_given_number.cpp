#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;

    int revNum = 0, i = 0;
    while(n != 0){
        int digit = n % 10;
        revNum = (digit * pow(10, i)) + revNum;
        n = n / 10;
        i++;
    }

    cout<<"Reverse Number = "<<revNum;
    return 0;
}