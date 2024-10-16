#include<iostream>
using namespace std;

class A{
    public: 
        void method(){
            cout<<"This is method of class A"<<endl;
        }
};
class B: public A{
    public: 
        void method(){
            cout<<"This is method of class B"<<endl;
        }
};

int main(){
    B obj;
    obj.A::method();
    obj.method();
    return 0;
}