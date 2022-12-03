#include <iostream>
using namespace std;

class base
{
    int b;

public:
    base(int i)
    {
        b = i;
        cout << "Base class constructor is called." << endl;
    }
    void Display_base()
    {
        cout << "Value of base class variable = " << b << endl;
    }
};

class derived : public base
{
    int d;

public:
    derived(int i, int j) : base(i)
    {
        d = j;
        cout << "Derived class constructor is called." << endl;
    }
    void Display_derived()
    {
        cout << "Value of derived class variable = " << d << endl;
    }
};

int main()
{
    derived D(10, 5);
    D.Display_base();
    D.Display_derived();
    return 0;
}