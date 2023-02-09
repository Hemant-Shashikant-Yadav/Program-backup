#include <iostream>
using namespace std;

class Shape
{
protected:
    double x, y;

public:
    void getData(int i, int j = 0)
    {
        x = i;
        y = j;
    }
    virtual void Display() = 0;
};

class triangle : public Shape
{
public:
    void Display()
    {
        double area = (x * y) / 2;
        cout << "The area of triangle = " << area << endl;
    }
};

class rectangle : public Shape
{
public:
    void Display()
    {
        double area = x * y;
        cout << "The area of rectangle = " << area << endl;
    }
};
class circle : public Shape
{
public:
    void Display()
    {
        float pi = 3.14;
        double area = pi * x * x;
        cout << "The area of circle = " << area << endl;
    }
};

int main()
{
    Shape *s;

    rectangle r;
    s = &r;
    s->getData(10, 5);
    s->Display();

    triangle t;
    s = &t;
    s->getData(10, 2);
    s->Display();

    circle c;
    s = &c;
    s->getData(15, 0);
    s->Display();

    return 0;
}