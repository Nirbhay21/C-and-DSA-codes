#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Print Method Of Class A" << endl;
    }
};

class B : virtual public A
{
    // public:
    //     void print()
    //     {
    //         cout << "Print Method Of Class B" << endl;
    //     }
};

class C : virtual public A
{
    // public:
    // void print()
    // {
    //     cout << "Print Method Of Class C" << endl;
    // }
};

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.print();
    return 0;
}