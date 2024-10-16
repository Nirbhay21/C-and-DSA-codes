#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operation;
    cout << "Enter num1 = ";
    cin >> num1;
    cout << "Enter num2 = ";
    cin >> num2;
    cout << "Enter operation = ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        break;
    case '%':
        cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
        break;
    default:
        cout << "Invalid operation";
    }
    return 0;
}