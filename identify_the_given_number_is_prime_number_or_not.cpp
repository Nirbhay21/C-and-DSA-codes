#include<iostream>
using namespace std;

int main(){
    int i = 2, num;
    cout<<"Enter number = ";
    cin>>num;
    while(i < num){
        if(num % i == 0){
            cout<<"Not prime for - "<<i<<endl;
        }
        else{
            cout<<"Prime for - "<<i<<endl;
        }
        i++;
    }
    return 0;
}