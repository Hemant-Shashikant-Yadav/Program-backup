#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    virtual void set()
    {
        cout << "Enter A = ";
        cin >> a;
    }
    virtual void display()
    {
        cout << "A = " << a << endl;
    }
};

class B : public A
{
protected:
    int b;

public:
    void set()
    {
        cout << "Enter B = ";
        cin >> b;
    }
    void display()
    {
        cout << "B = " << b << endl;
    }
};
class C : public B
{
protected:
    int c;

public:
    void set()
    {
        cout << "Enter C = ";
        cin >> c;
    }
    void display()
    {
        cout << "C = " << c << endl;
    }
};


int main()
{
    A *a;
    A a1;
    a = &a1;

    a->set();   
    a->display();

    B b1;
    a = &b1;
    a->set();
    a->display();

   

    C *c;
    C c1;

    c = &c1;
    c->set();
    c->display();
    return 0;
}