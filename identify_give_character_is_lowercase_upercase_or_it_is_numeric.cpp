#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter character = ";
    c = cin.get();
    if(c >= 'a' && c <= 'z'){
        cout<<"This is Lowercase";
    }
    else if(c >= 'A' && c <= 'Z'){
        cout<<"This is Uppercase";
    }
    else if(c <= '9' && c >= '0'){
        cout<<"This is Numberic";
    }
    else{
        cout<<"This is special symbol";
    }
}