#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Constructor of Class A"<<endl;
    }
};
class B
{
public:
    B()
    {
        cout<<"Constructor of Class B"<<endl;
    }
};
class C
{
public:
    C()
    {
        cout<<"Constructor of Class C"<<endl;
    }
};
class D: C, B, A
{
public:
    D()
    {
        cout<<"Constructor of Class D"<<endl;
    }
};

int main()
{
    D obj;
    return 0;
}