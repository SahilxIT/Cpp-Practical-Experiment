
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    virtual void area() = 0;

    virtual ~Shape() {}
};

// Circle Class
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle: "
             << 3.14 * radius * radius << endl;
    }
};

// Rectangle Class
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};

// Triangle Class
class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void area() override
    {
        cout << "Area of Triangle: "
             << 0.5 * base * height << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 6);

    Shape *s;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
