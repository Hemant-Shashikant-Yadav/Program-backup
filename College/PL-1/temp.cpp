#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
   

    Complex(int n1 =0 , int n2 =0)
    {
        real = n1;
        imag = n2;
    }

    void displayNum()
    {
        cout << real << " + i"<<imag<< endl;
    }

    Complex operator +(Complex  &obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
};

int main()
{
    Complex N1(50, 25), N2(15, 14);
    cout<<"Num 1 = "<<endl;
    N1.displayNum();
    cout<<"Num 2 = "<<endl;
    N2.displayNum();

    Complex N3 = N1 + N2;
    cout<<"\nResult = "<<endl;
    N3.displayNum();
    return 0;
}