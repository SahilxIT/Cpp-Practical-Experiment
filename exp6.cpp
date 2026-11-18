
#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    // Default Constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized Constructor
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Function Overloading
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void display(string message)
    {
        cout << message << endl;
        display();
    }

    // Operator Overloading
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(5, 3);

    Complex c3, c4;

    c3 = c1 + c2;
    c4 = c1 - c2;

    c1.display("First Complex Number:");
    c2.display("Second Complex Number:");

    c3.display("Addition:");
    c4.display("Subtraction:");

    return 0;
}
