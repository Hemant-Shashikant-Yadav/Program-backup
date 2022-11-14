#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
    void getdata1();
};
class base2
{
protected:
    int b;

public:
    void getdata2();
};

class derrived : public base1, public base2
{
protected:
    int c;

public:
    void operation();
};

void base1::getdata1()
{
    cout<<"A = ";
    cin>>a;
}
void base2::getdata2()
{
    cout<<"B = ";
    cin>>b;
}

void derrived::operation()
{
    c=a*b;
    cout<<"C = "<<c;
}

int main()
{
    derrived d;
    d.getdata1();
    d.getdata2();
    d.operation();
    return 0;
}