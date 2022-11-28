#include <iostream>
using namespace std;

class Number
{
    int num1, num2;

public:
    Number()
    {
        num1 = 0;
        num2 = 0;
    }

    Number(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayNum()
    {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
    }

    void  operator -()
    {
        num1 = -num1;
        num2 = -num2;

    }
};

int main()
{
    Number N1(10,20),N2(-15,52);
    
    cout<<"Before = "<<endl;
    N1.displayNum();
    N2.displayNum();
    cout<<"After = "<<endl;
    -N1;
    N1.displayNum();
    -N2;
    N2.displayNum();
    return 0;
}