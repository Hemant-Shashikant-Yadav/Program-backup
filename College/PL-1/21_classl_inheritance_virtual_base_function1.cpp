#include <iostream>
using namespace std;

class base
{
protected:
public:
    virtual void print()
    {
        cout << "This is printed in Base class" << endl;
    }
    void print1()
    {
        cout << "This is printed in Base class !!!" << endl;
    }
};

class derrived : public base
{
private:
    /* data */
public:
    void print()
    {
        cout << "This is printed in derrived class" << endl;
    }
    void print1()
    {
        cout << "This is printed in Base class !!!" << endl;
    }
};

int main()
{
    base *a;
    derrived b;
    a = &b;
    a->print();
    a->print1();

    return 0;
}