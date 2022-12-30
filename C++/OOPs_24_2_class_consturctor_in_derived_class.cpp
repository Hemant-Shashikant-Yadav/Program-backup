#include <iostream>
using namespace std;

class base1
{
    int b;

public:
    base1(int i)
    {
        b = i;
        cout << "Base class 1 constructor is called." << endl;
    }
    void Display_base1()
    {
        cout << "Value of base class 1 variable = " << b << endl;
    }
};
class base2
{
    int C;

public:
    base2(int i)
    {
        C = i;
        cout << "Base class 2 constructor is called." << endl;
    }
    void Display_base2()
    {
        cout << "Value of base class 2 variable = " << C << endl;
    }
};

class derived : public base1, public base2
{
    int d;

public:
    derived(int i, int j, int k) : base1(i), base2(j)
    {
        d = k;
        cout << "Derived class constructor is called." << endl;
    }
    void Display_derived()
    {
        cout << "Value of derived class variable = " << d << endl;
    }
};

int main()
{
    derived D(10, 5, 20);
    D.Display_base1();
    D.Display_base2();
    D.Display_derived();
    return 0;
}