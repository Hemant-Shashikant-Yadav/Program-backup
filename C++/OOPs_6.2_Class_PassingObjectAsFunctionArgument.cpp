#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void Data_input(int a, int b);
    void Data_Sum(Complex c1, Complex c2);
    void Data_out(void);
};

void Complex::Data_input(int a1, int b1)
{
    a = a1;
    b = b1;
}

void Complex::Data_Sum(Complex c1, Complex c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}

void Complex::Data_out(void)
{
    cout << "The complex number is = " << a << " + " << b << "i."<<endl;;
}

int main()
{
    Complex c1, c2, c3;

    c1.Data_input(1, 2);
    c1.Data_out();

    c2.Data_input(3, 4);
    c2.Data_out();

    c3.Data_Sum(c1,c2);
    c3.Data_out();
    return 0;
}