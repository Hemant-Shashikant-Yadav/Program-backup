#include <iostream>
using namespace std;

class Number
{
    int a;
    int b;

public:
    Number();
    Number(int a1, int b1);
    void Display(void);
};

Number::Number(int a1, int b1)
{
    a = a1;
    b = b1;
}

Number::Number()
{
}
void Number::Display(void)
{
    cout << "The number A is = " << a << " and B is = " << b << endl;
}

int main()
{
    Number A(10, 20);
    A.Display();

    return 0;
}