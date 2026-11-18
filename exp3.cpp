
#include <iostream>
using namespace std;

class Number
{
private:
    int *data;

public:

    // Default Constructor
    Number()
    {
        data = new int(0);
        cout << "Default Constructor\n";
    }

    // Parameterized Constructor
    Number(int value)
    {
        data = new int(value);
        cout << "Parameterized Constructor\n";
    }

    // Copy Constructor
    Number(const Number &obj)
    {
        data = new int(*obj.data);
        cout << "Copy Constructor\n";
    }

    // Move Constructor
    Number(Number &&obj) noexcept
    {
        data = obj.data;
        obj.data = nullptr;
        cout << "Move Constructor\n";
    }

    // Copy Assignment Operator
    Number& operator=(const Number &obj)
    {
        if (this != &obj)
        {
            *data = *obj.data;
        }
        cout << "Copy Assignment\n";
        return *this;
    }

    // Move Assignment Operator
    Number& operator=(Number &&obj) noexcept
    {
        if (this != &obj)
        {
            delete data;
            data = obj.data;
            obj.data = nullptr;
        }
        cout << "Move Assignment\n";
        return *this;
    }

    void display()
    {
        if (data != nullptr)
            cout << "Value: " << *data << endl;
        else
            cout << "No Data\n";
    }

    // Destructor
    ~Number()
    {
        delete data;
        cout << "Destructor Called\n";
    }
};

int main()
{
    Number n1;
    Number n2(100);

    Number n3(n2);

    Number n4(move(n2));

    n1 = n3;

    n1 = move(n4);

    n1.display();
    n3.display();

    return 0;
}
