#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex c1)
    {
        c1.real = 123;
        Complex comp((real + c1.real), (img + c1.img));
        return comp;
    }
    Complex operator-(Complex c1)
    {
        Complex comp((real - c1.real), (img - c1.img));
        return comp;
    }

    void display()
    {
        cout << real << " + " << img << "i" <<endl;
    }
};

int main()
{
    Complex c1(12, 12);
    Complex c2(5, 5);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    c3.display();
    c4.display();
    c1.display();
    return 0;
}