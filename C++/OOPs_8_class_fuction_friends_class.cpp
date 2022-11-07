#include <iostream>
using namespace std;

class Complex;

class SumComplex
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int SumReal(Complex, Complex);
    int SumComp(Complex, Complex);
};
class Complex
{
    int a;
    int b;
    // friend int SumComplex::SumReal(Complex C1, Complex C2);
    // friend int SumComplex::SumComp(Complex C1, Complex C2);
    friend class SumComplex;

public:
    void Data_input(int a1, int b1);
    void Data_output(void);
};

void Complex ::Data_input(int a1, int b1)
{
    a = a1;
    b = b1;
}

void Complex ::Data_output(void)
{
    cout << "The Complex no is = " << a << " + " << b << "i " << endl;
}

int SumComplex::SumReal(Complex C1, Complex C2)
{  
    return (C1.a + C2.a);
}

int SumComplex::SumComp(Complex C1, Complex C2)
{  
    return (C1.b + C2.b);
}



int main()
{
    Complex C1, C2;

    C1.Data_input(1, 2);
    C1.Data_output();

    C2.Data_input(3, 4);
    C2.Data_output();

    SumComplex C3,C4;

    int ans = C3.SumReal(C1, C2);
    cout << "The sum of Real part of Complex number is = " << ans << endl;
    
    int ans1 = C4.SumComp(C1, C2);
    cout << "The sum of Real part of Complex number is = " << ans1 << endl;

    return 0;
}