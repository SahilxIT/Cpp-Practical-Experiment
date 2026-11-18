
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
private:
    T arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if (top >= 99)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            arr[++top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << arr[top--] << " popped from stack" << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack Elements: ";

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    cout << "\nInteger Stack\n";

    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();

    cout << "\nFloat Stack\n";

    Stack<float> s2;
    s2.push(10.5);
    s2.push(20.5);
    s2.display();

    cout << "\nString Stack\n";

    Stack<string> s3;
    s3.push("C++");
    s3.push("OOP");
    s3.push("DSA");
    s3.display();

    return 0;
}
