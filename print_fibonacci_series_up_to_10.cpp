#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c;
    int n = 10;
    for(int i = 1; i <= 10; i++){
        cout<<i<<". "<<a<<endl;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}