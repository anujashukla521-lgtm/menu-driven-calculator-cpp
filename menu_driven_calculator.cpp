// A menu-driven calculator program implemented in C++ using Object-Oriented Programming concepts. It performs basic arithmetic operations like addition, subtraction, multiplication, and division with a user-friendly interactive menu.

#include <iostream>
using namespace std;

class Calculator
{
    int x, y;

public:
    void setData(int val1, int val2)
    {
        x = val1;
        y = val2;
    }
    void add()
    {
        cout << "Addition of two numbers " << x + y << endl;
    }
    void subtract()
    {
        cout << "Subtraction of two numbers " << x - y << endl;
    }
    void multiply()
    {
        cout << "Multiplication of two numbers " << x * y << endl;
    }
    void divide()
    {
        if (y == 0)
            cout << "Error!! Division by zero " << endl;
        cout << "Division of two numbers " << (float)x / y << endl;
    }
};
int main()
{
    int a, b, ch, op;

    Calculator c;
    do
    {
        cout << "Enter 1 for addition " << endl;
        cout << "Enter 2 for subtraction " << endl;
        cout << "Enter 3 for multiplication " << endl;
        cout << "Enter 4 for division " << endl;
        cout << "Enter 5 for exit " << endl;

        cout << "Enter your choice" << endl;
        cin >> ch;
        if (ch == 5)
        {
            cout << "Exit!!" << endl;
            break;
        }
        cout << "Enter two numbers " << endl;

        cin >> a >> b;
        c.setData(a, b);
        switch (ch)
        {
        case 1:
            c.add();
            break;
        case 2:
            c.subtract();
            break;
        case 3:
            c.multiply();
            break;
        case 4:
            c.divide();
            break;
        default:
            cout << "Wrong choice!!" << endl;
        }
        cout << "Do you want to continue; Press 1/0 ";
        cin >> op;
    } while (op == 1);
    return 0;
}