#include <iostream>
using namespace std;

class base
{
protected:
    double input;
    double output;

public:
    base(double i)
    {
        input = i;
    }

    double display_input()
    {
        return input;
    }
    double display_output()
    {
        return output;
    }

    virtual void convert() = 0;
};

class liter_to_gallons : public base
{
private:
public:
    liter_to_gallons(double i) : base(i)
    {
    }

    void convert()
    {
        output = input * 0.264172;
    }
};

class degree_to_f : public base
{
private:
public:
    degree_to_f(double i) : base(i)
    {
    }

    void convert()
    {
        output = (input * 1.8) + 32;
    }
};

int main()
{
    base *b;
    liter_to_gallons l(10.0);
    degree_to_f d(100.0);

    b = &l;
    cout <<"The value enterd in liters is  = " b->display_input() << endl;
    b->convert();
    cout << b->display_output() << endl;

    b = &d;
    cout << b->display_input() << endl;
    b->convert();
    cout << b->display_output() << endl;

    return 0;
}