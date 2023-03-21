#include <iostream>
using namespace std;

// member func of class B is friend func of class a
class B;
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

void A::swap(B &q)
{
    int temp = a;
    a = q.b;
    q.b = temp;
}

int main()
{
    A p; B q;
    p.set();
    q.set();
    p.display();
    q.display();

    p.swap(q);
    p.display();
    q.display();

    return 0;
}