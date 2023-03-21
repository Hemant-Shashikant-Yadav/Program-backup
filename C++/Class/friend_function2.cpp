#include <iostream>
using namespace std;

// member func of class B is friend funcof class a
class A;

class B
{
    int b;

public:
    void set()
    {
        cout << "Enter b = ";
        cin >> b;
    }
    void display()
    {
        cout << "\n B b = " << b;
    }
    friend void A::swap(B &);
};


class A
{
    int a;

public:
    void set()
    {
        cout << "Enter A = ";
        cin >> a;
    }
    void display()
    {
        cout << "\n A a = " << a;
    }
    void swap(B &);
};

void B::swap(A &p)
{
    int temp = p.a;
    p.a = b;
    b = temp;
}

int main()
{
    A p; B q;
    p.set();
    q.set();
    p.display();
    q.display();

    q.swap(p);
    p.display();
    q.display();

    return 0;
}