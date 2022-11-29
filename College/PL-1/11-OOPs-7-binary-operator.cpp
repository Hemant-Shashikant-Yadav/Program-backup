#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int n1 = 0, int n2 = 0)
    {
        real = n1;
        imag = n2;
    }

    void getData()
    {
        cout<<"Enter real part of number = ";
        cin>>real;
        cout<<"Enter imaginary part of number = ";
        cin>>imag;
    }
    void displayNum()
    {
        cout << real << " + i" << imag << endl;
    }

    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex N1, N2;
    N1.getData();
    N2.getData();

    cout << "\nNum 1 = " << endl;
    N1.displayNum();
    cout << "Num 2 = " << endl;
    N2.displayNum();

    Complex N3 = N1 + N2;
    cout << "\nResult = " << endl;
    N3.displayNum();
    return 0;
}