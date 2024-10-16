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

class B
{
public:
    void print()
    {
        cout << "Print Method Of Class B" << endl;
    }
};

class C : public A, public B
{
    
};

int main()
{
    C obj;
    // obj.print();
    return 0;
}