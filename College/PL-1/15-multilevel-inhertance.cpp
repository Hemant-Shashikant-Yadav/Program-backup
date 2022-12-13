#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
    void getdata1();
};
class base2 : public base1
{
protected:
    int b;

public:
    void getdata2();
};

class base3 : public base2
{
protected:
    int c;

public:
    void getdata3();
    void sum();
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
void base3::getdata3()
{
    cout<<"C = ";
    cin>>c;
}

void base3::sum()
{
    int D = a+b+c;
    cout<<"Sum = "<<D;
}

int main()
{
    base3 d;
    d.getdata1();
    d.getdata2();
    d.getdata3();
    d.sum();
    return 0;
}