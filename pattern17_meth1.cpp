#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    for(int row = 0; row < n; row++){
        for(int space = 0; space < row; space++){
            cout<<" ";
        }
        for(int col = 0; col < (n - row - 1) * 2 + 1; col++){
            if(col == 0 || col == (n - row - 1) * 2){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}