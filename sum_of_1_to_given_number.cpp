#include<iostream>
using namespace std;

int main(){
    int n, i = 1, sum = 0;
    cout<<"Enter number = ";
    cin>>n;
    while(i <= n){
        sum += i;
        i++;
    }
    cout<<"Sum from 1 to "<<n<<" is "<<sum;
    return 0;
}