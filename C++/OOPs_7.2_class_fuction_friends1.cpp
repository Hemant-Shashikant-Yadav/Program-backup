#include <iostream>
using namespace std;

class B;

class A
{
    int a;
    friend void Sum(A, B);

public:
    void DataIn(void)
    {
        cout << "Enter a number = ";
        cin >> a;
    }
};

class B
{
    int b;
    friend void Sum(A, B);

public:
    void Data_In(void)
    {
        cout << "Enter a number = ";
        cin >> b;
    }
};

void Sum(A C1, B C2)
{
    cout << "The sum of A + B is = " << C1.a + C2.b;
}

int main()
{
    A C1;
    B C2;

    C1.DataIn();
    C2.Data_In();

    Sum(C1, C2);
    return 0;
}