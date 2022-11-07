#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    friend Complex Data_sum(Complex C1, Complex C2);

public:
    // friend Complex Data_sum(Complex C1, Complex C2);
    void Data_input(int a1, int b1);
    void Data_Out(void);
};

void Complex::Data_input(int a1, int b1)
{
    a = a1;
    b = b1;
}

void Complex::Data_Out(void)
{
    cout << "The vlue of complex no is = " << a << " + " << b << "i" << endl;
}

Complex Data_sum(Complex C1, Complex C2)
{
    Complex C3;
    C3.Data_input((C1.a + C2.a), (C1.b + C2.b));
    return C3;
}

int main()
{
    Complex C1, C2, Sum;

    C1.Data_input(1,2);
    C1.Data_Out();

    C2.Data_input(3,4);
    C2.Data_Out();

    Sum = Data_sum(C1, C2);
    Sum.Data_Out();

    return 0;
}