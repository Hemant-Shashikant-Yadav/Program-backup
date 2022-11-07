#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(int x, int y);
    Complex(int x);
    Complex();
    void Display (void);
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

Complex::Complex(int x)
{
    a = x;
    b = 0;
}

Complex::Complex()
{
    a = 0;
    b = 0;
}

void Complex::Display(void)
{
    cout<<"The Number is = "<<a<<" + "<<b<<"i "<<endl;

}


int main()
{
    

    Complex C1(5,7);
    C1.Display();

    Complex C2(5);
    C2.Display();
    
    Complex C3;
    C3.Display();



    return 0;
}