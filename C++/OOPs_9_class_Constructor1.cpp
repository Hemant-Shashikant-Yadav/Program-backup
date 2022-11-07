#include<iostream>
using namespace std;

class Number
{
    int a;
    int b;

public:
    Number(void);
    void Display(void);
};

Number::Number(void)
{
    a = 10;
    b = 20;
}

void Number::Display(void)
{
    cout<<"Number A is = "<<a<<"\nNumber B is = "<<b;
}

int main()
{
    Number N;
    N.Display();

    return 0;
}