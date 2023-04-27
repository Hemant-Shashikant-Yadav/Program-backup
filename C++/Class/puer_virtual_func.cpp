#include <iostream>
using namespace std;

class Dim
{
protected:
    int w, h;

public:
    Dim()
    {
        w = h = 0;
    }
    void setDim()
    {
        cout << "Width = ";
        cin >> w;
        cout << "Hight = ";
        win >> h;
    }
    void display()
    {
        cout << "Width = " << w << endl;
        cout << "Hight = " << h << endl;
    }
    virtual void area() = 0;
};

class Rect : public Dim
{
public:
    Rect() : Dim()
    {
    }

    Rect(int a, int b) : Dim(a, b)
    {
    }

    void area()
    {
        cout << "Rect area = " << (w * h) << endl;
    }
};

class Trang : public Dim
{
public:
    Trang() : Dim()
    {
    }

    Trang(int a, int b) : Dim(a, b)
    {
    }

    void area()
    {
        cout << "Trang area = " << (w * h) / 2 << endl;
    }
};

int main()
{
    Dim *dpts;

    dpts = new Rect(10,15);
    dpts->display();
    dpts->area();

    dpts = new Trang(10,15);
    dpts->display();
    dpts->area();
    return 0;
}